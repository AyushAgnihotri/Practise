#include <bits/stdc++.h>
using namespace std;
int n,m,grid[255][255],vis[255][255],x[4]={0,1,0,-1},y[4]={1,0,-1,0};
pair<int,int> src,dest,u,v;
queue < pair<int,int> > Q;
map<int,int> mp;
map<int,int> :: iterator it;
bool is_safe(pair<int,int> curr)
{
	if(curr.first>=1 && curr.first<=n && curr.second>=1 && curr.second<=m && vis[curr.first][curr.second] == 0) {
		if(grid[curr.first][curr.second]==1) {
			return 1;
		}
	}	
	return 0;
}

void bfs(pair<int,int> s) 
{
	int i,d=1;
	Q.push(s);
	vis[s.first][s.second]=1;
	while(!Q.empty()) {
		u=Q.front();
		Q.pop();
		for(i=0;i<4;i++) {
			v=make_pair(u.first+x[i],u.second+y[i]);
			if(is_safe(v)) {
				Q.push(v);
				vis[v.first][v.second]=vis[u.first][u.second] + 1;
				d++;
			}
		}
	}
	if(mp.find(d)==mp.end()) {
		mp.insert(make_pair(d,1));
	}
	else {
		mp[d]++;
	}
}

int main()
{
	int i,j,cnt=0;
	scanf("%d%d",&n,&m);
	while(n!=0 && m!=0) {
		cnt=0;
		for(i=1;i<=n;i++) {
			for(j=1;j<=m;j++) {
				scanf("%d",&grid[i][j]);
				vis[i][j]=0;
			}
		}
		for(i=1;i<=n;i++){
			for(j=1;j<=m;j++) {
				if(vis[i][j]==0 && grid[i][j]==1) {
					bfs(make_pair(i,j));
					cnt++;
				}
			}
		}
		printf("%d\n",cnt);
		for(it=mp.begin();it!=mp.end();it++) {
			printf("%d %d\n",it->first,it->second);
		}
		mp.clear();
		scanf("%d%d",&n,&m);		
	}
	return 0;
}