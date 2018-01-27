#include <bits/stdc++.h>
using namespace std;
int n,m,vis[255][255],x[4]={0,-1,1,0},y[4]={-1,0,0,1};
char grid[255][255];
pair<int,int> src,res,u,v;
queue< pair<int,int> > Q;


bool is_safe(pair<int,int> curr)
{
	if(curr.first>=1 && curr.first<=n && curr.second>=1 && curr.second<=m)
		return 1;
	return 0;
}

pair<int,int> bfs()
{
	bool flag=0;
	int i,j,wolves=0,sheeps=0;
	if(grid[src.first][src.second]=='v')
		wolves++;
	else if(grid[src.first][src.second]=='k')
		sheeps++;
	Q.push(src);
	vis[src.first][src.second]=1;
	while(!Q.empty()) {
		u=Q.front();
		Q.pop();
		for(i=0;i<4;i++) {
			v=make_pair(u.first + x[i], u.second + y[i]);
			if(is_safe(v) ) {
				if(vis[v.first][v.second] == 0 && grid[v.first][v.second] != '#') {
					if(grid[v.first][v.second] == 'k') 
						sheeps++;
					else if(grid[v.first][v.second] == 'v')
						wolves++;
					Q.push(v);
					vis[v.first][v.second]=1;
				}
			}
			else {
				flag=1;
			}
		}
	}
	if(flag)
		return make_pair(sheeps,wolves);
	else {
		if(sheeps>wolves)
			return make_pair(sheeps,0);
		else
			return make_pair(0,wolves);
	}
}

int main()
{
	int i,j;
	int wolves=0,sheeps=0;
	memset(vis,0,sizeof(vis));
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++) 
		scanf("%s",grid[i]+1);
	for(i=1;i<=n;i++) {
		for(j=1;j<=m;j++) {
			if((grid[i][j]=='v' || grid[i][j]=='k' ) && vis[i][j]==0) {
				src=make_pair(i,j);
				res=bfs();
				sheeps=sheeps + res.first;
				wolves=wolves + res.second;
			}
		}
	}
	printf("%d %d",sheeps,wolves);
	return 0;
}