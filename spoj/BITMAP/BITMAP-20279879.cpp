#include <bits/stdc++.h>
using namespace std;
int m,n,t,vis[205][205],x[4] = {0,1,-1,0},y[4] = {1,0,0,-1};
char grid[205][205];
pair<int,int> src,dest,u,v;
vector < pair<int,int> > src_white;
queue < pair<int,int> > Q;
    
bool is_safe(pair<int,int> curr) 
{
	if(curr.first >= 1 && curr.first <= n && curr.second >= 1 && curr.second <= m)
		return 1;
	return 0;
}

void bfs(pair<int,int> src) 
{
	Q.push(src);
	while(!Q.empty()) {
		u = Q.front();
		Q.pop();
		for(int i=0;i<4;i++) {
			v=make_pair(u.first+x[i],u.second+y[i]);
			if(is_safe(v)) {
				if(vis[v.first][v.second] == -1) {
					vis[v.first][v.second] = vis[u.first][u.second] + 1;
					Q.push(v);
				}
				else if(vis[v.first][v.second] > vis[u.first][u.second] + 1) {
					vis[v.first][v.second] = 1 + vis[u.first][u.second];
					Q.push(v);
				}
			}
		}
	}
}


int main()
{
    int i,j,sz;
	scanf("%d",&t);
    while(t--) {
        src_white.clear();
		scanf("%d%d",&n,&m);
		memset(vis,-1,sizeof(vis));
		for(i=1;i<=n;i++)
			scanf("%s",grid[i]+1);
		for(i=1;i<=n;i++) {
			for(j=1;j<=m;j++) {
				if(grid[i][j]=='1') {
					vis[i][j] = 0;
					src_white.push_back(make_pair(i,j));
				}
			}
        }
        sz=src_white.size();
		for(i=0;i<sz;i++) {
			bfs(src_white[i]);
        }
		for(i=1;i<=n;i++) {
			for(j=1;j<=m;j++) {
				printf("%d ",vis[i][j]);
			}
			printf("\n");
		}
	}
} 