#include <bits/stdc++.h>
using namespace std;
int m,n,vis[25][25];
pair<int,int> src,dest,u,v;
char grid[25][25];
bool flag=0;
queue < pair<int,int> > Q;
bool is_safe(pair<int,int> curr) {
	if(curr.first>=1 && curr.first<=n && curr.second>=1 && curr.second<=m && vis[curr.first][curr.second]==0)
		if(grid[curr.first][curr.second]=='.')
			return 1;
	return 0;	
}

bool bfs() {
	int i,j;
	int x[4]={0,1,0,-1},y[4]={1,0,-1,0};
	for(i=1;i<=n;i++) {
		for(j=1;j<=m;j++) {
			vis[i][j]=0;
		}
	}
	Q.push(src);
	vis[src.first][src.second]=1;
	while(!Q.empty()) {
		u=Q.front();
		Q.pop();
		for(i=0;i<4;i++) {
			v=make_pair(u.first+x[i],u.second+y[i]);
			if(is_safe(v)) {
				Q.push(v);
				vis[v.first][v.second] = vis[u.first][u.second] + 1;
			}
		}
	}

	if(vis[src.first][src.second]!=0 && vis[dest.first][dest.second]!=0) {
		return 0;
	}

	return 1;
}

int main()
{
	int i,j,t,cnt=0;
	scanf("%d",&t);
	while(t--) {
		cnt=0;
		flag=0;
		cin>>n>>m;
		for(i=1;i<=n;i++) {
			for(j=1;j<=m;j++) {
				cin>>grid[i][j];
			}
		}
		for(i=1;i<=n;i++) {
			for(j=2;j<=m-1;j++) {
				if( (i==1 || i==n) && grid[i][j]=='.' ) {
					if(cnt==0)
						src=make_pair(i,j);
					if(cnt==1)
						dest=make_pair(i,j); 
					cnt++;
				}
			}
		}

		for(i=1;i<=n;i++) {
			for(j=1;j<=m;j++) {
				if( (j==1 || j==m) && grid[i][j]=='.' ) {
					if(cnt==0)
						src=make_pair(i,j);
					if(cnt==1)
						dest=make_pair(i,j); 
					cnt++;
				}
			}
		}
		if(cnt>2 || cnt<2) {
			flag=1;
		}
		else {
			flag=bfs();
		}
		if(flag) {
			printf("invalid\n");
		}
		else {
			printf("valid\n");
		}
	}

	return 0;
}