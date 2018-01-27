#include <bits/stdc++.h>
using namespace std;
int n,m;
char grid[1005][1005];
int vis[1005][1005];
int x[4]={1,0,-1,0};
int y[4]={0,1,0,-1};
pair<int,int> src,u,v;
queue< pair<int,int> > Q;

bool is_safe(pair< int,int > curr) 
{
	if(curr.first>=1 && curr.first<=n && curr.second>=1 && curr.second<=m && vis[curr.first][curr.second]==0) {
		if(grid[curr.first][curr.second] == '.') {
			return 1;
		}
	}
	return 0;
}

int bfs() {
	int i,j,d=1;
	for(i=1;i<=n;i++) {
		for(j=1;j<=m;j++) {
			vis[i][j]=0;
		}
	}
	Q.push(src);
	vis[src.first][src.second] = 1;
	while(!Q.empty()) {
		u=Q.front();
		Q.pop();
		for(i=0;i<4;i++) {
			v.first = u.first + x[i];
			v.second = u.second + y[i];		
			if(is_safe(v)) {
				vis[v.first][v.second] = vis[u.first][u.second] + 1;
				Q.push(v);
				d=max(d,vis[v.first][v.second]);
			}
		}
	}
	return d;
}

int main()
{
	bool flag=0;
	int t,i,j;
	cin>>t;
	while(t--) {
		flag=0;
		cin>>m>>n;
		src=make_pair(-1,-1);
		for(i=1;i<=n;i++) {
			for(j=1;j<=m;j++) {
				cin>>grid[i][j];
			}
		}
		for(i=1;i<=n;i++) {
			for(j=1;j<=m;j++) {
				if(grid[i][j] == '.') {
					src=(make_pair(i,j));
					flag=1;
				}
			}
			if(flag)
				break;
		}
		int max_distance=bfs();
		for(i=1;i<=n;i++) {
			for(j=1;j<=m;j++) {
				if(max_distance== vis[i][j]) {
					src=make_pair(i,j);
				}
			}
		}
		printf("Maximum rope length is %d.\n",bfs()-1);
	}
	return 0;
}