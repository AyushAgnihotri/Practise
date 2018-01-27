#include <bits/stdc++.h>
using namespace std;

int m,n,t,x[4]={1,-1,0,0},y[4]={0,0,1,-1},vis[105][105];
char grid[105][105];
pair<int,int> src,dest,u,v;

bool is_safe(pair<int,int> curr)
{
	if(curr.first>=1 && curr.first<=m && curr.second>=1 && curr.second<=n && vis[curr.first][curr.second]==0)
		if(grid[curr.first][curr.second]!='*')
			return 1;
	return 0;
}

int bfs()
{
	queue< pair<int,int> > Q;
	int i,j;
	Q.push(src);
	vis[src.first][src.second]=1;
	while(!Q.empty()) {
		u=Q.front();
		Q.pop();
		if(grid[u.first][u.second]=='#')
			return vis[u.first][u.second]-1;
		for(i=0;i<4;i++) {
			v=make_pair(u.first + x[i], u.second + y[i]);
			if(is_safe(v)) {
				vis[v.first][v.second]=vis[u.first][u.second]+1;
				Q.push(v);
			}
		}
	}
	return -1;
}

int main()
{
	int i,j;
	scanf("%d",&t);
	while(t--) {
		memset(vis,0,sizeof(vis));
		scanf("%d%d",&m,&n);
		for(i=1;i<=m;i++) 
			scanf("%s",grid[i]+1);
		for(i=1;i<=m;i++) {
			for(j=1;j<=n;j++) {
				if(grid[i][j]=='$')
					src=make_pair(i,j);
			}
		}
		printf("%d\n",bfs());
	}
	return 0;
}