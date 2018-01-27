#include <bits/stdc++.h>
using namespace std;
int n,m;
pair<int,int> u,v;
queue< pair<int,int> > Q;
int visit[505][505];
char grid[505][505];
int bfs()
{
	memset(visit,0,sizeof(visit));
	int i,j;
	int x[4]={0,1,0,-1},y[4]={1,0,-1,0};
	Q.push(make_pair(1,1));
	visit[0][0] = 1;
	while(!Q.empty()) {
		u=Q.front();
		Q.pop();
		if(u.first==n && u.second==m) {
			return visit[u.first][u.second];
		}
		for(i=0;i<4;i++) {
			v=make_pair(u.first+((grid[u.first][u.second]-'0')*x[i]),u.second+((grid[u.first][u.second]-'0')*y[i]));
			if(v.first<=n && v.first>0 && v.second<=m && v.second > 0 ) {
				if(visit[v.first][v.second] == 0) {
					visit[v.first][v.second] = 1+visit[u.first][u.second];
					Q.push(v);
				}
			}
		}
	}
	return 0;
}

int main()
{
	int i,j;
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++) {
		for(j=1;j<=m;j++)
			cin>>grid[i][j];
	}
	int res=bfs();
	if(res==0) 
		printf("-1");
	else 
		printf("%d",res);
	return 0;
}