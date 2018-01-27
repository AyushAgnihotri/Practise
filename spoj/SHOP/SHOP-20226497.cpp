#include <bits/stdc++.h>
using namespace std;
int n,m,w;

pair <int,int> src,dest,u,v;
char grid[50][50];
int vis[50][50],dist[50][50];

priority_queue < pair< int, pair<int,int> >, vector < pair< int, pair<int,int> > > ,greater< pair< int, pair<int,int> > > > Q;

bool is_safe(pair< int,int > curr) {
	if(curr.first>=1 && curr.first<=n && curr.second>=1 && curr.second<=m && vis[curr.first][curr.second] == 0 ) {
		if(grid[curr.first][curr.second] != 'X') {
			return 1;
		}
	}
	return 0;
}

int bfs() {
	int i,j;
	int verticle[4]={1,0,-1,0};
	int horizontal[4]={0,1,0,-1};
	for(i=1;i<=n;i++) {
		for(j=1;j<=m;j++) {
			vis[i][j]=0;
			dist[i][j]=10000007;
		}
	}
	dist[src.first][src.second] = 0;
	vis[src.first][src.second] = 1;
	Q.push(make_pair(dist[src.first][src.second],src));
	while(!Q.empty()) {
		u=make_pair( (Q.top().second).first, (Q.top().second).second );
		Q.pop();
		if(u.first == dest.first && u.second == dest.second) {
			return dist[u.first][u.second];
		}
		for(i=0;i<4;i++) {
			v = make_pair( u.first + verticle[i] , u.second + horizontal[i] );
			w = grid[v.first][v.second] - '0';
			if(is_safe(v) && dist[v.first][v.second] > dist[u.first][u.second] + w) {
				dist[v.first][v.second] = dist[u.first][u.second] + w;
				Q.push( make_pair( dist[v.first][v.second] , make_pair(v.first,v.second) ) );
				vis[v.first][v.second]=1;
			}
		}
	}
	return 0;
}

int main()
{
	int i,j;
	cin>>m>>n;
	while(n!=0 && m!=0) {
		for(i=1;i<=n;i++) {
			for(j=1;j<=m;j++) {
				grid[i][j]='0';
			}
		}
		for(i=1;i<=n;i++) {
			for(j=1;j<=m;j++) {
				cin>>grid[i][j];
				if(grid[i][j]=='S') {
					grid[i][j]='0';
					src = make_pair(i,j);
				}
				if(grid[i][j]=='D') {
					grid[i][j]='0';
					dest= make_pair(i,j);
				}
			}
		}

		printf("%d\n",bfs());
		cin>>m>>n;
	}	
	return 0;
}