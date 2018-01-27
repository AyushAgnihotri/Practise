#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000
vector< pair<int,int> > adj[MAX];
queue< pair<int,int> > Q;
int dist[MAX],visit[MAX];
stack< pair<int,int> > S;
void bfs_dfs(int src,int n)
{
	int u,v,w,i,mx=0,dest;
	int count=0;
	for(i=1;i<=n;i++) {
		visit[i]=0;
		dist[MAX]=INT_MAX;
	}
	dist[src]=0;
	Q.push(make_pair(src,dist[src]));
	visit[src]=1;
	while(!Q.empty()) {
		u=Q.front().first;
		Q.pop();
		for(i=0;i<adj[u].size();i++) {
			v=adj[u][i].first;
			w=adj[u][i].second;
			if(visit[v]==0) {
				dist[v]=dist[u]+w;
				mx=max(mx,dist[v]);
				if(mx==dist[v])
					src=v;
				Q.push(make_pair(v,dist[v]));
				visit[v]=1;
			}
		}
	}
	for(i=1;i<=n;i++) {
		visit[i]=0;
		dist[MAX]=INT_MAX;
	}
	dist[src]=0;
	mx=0;
	S.push(make_pair(src,dist[src]));
	visit[src]=1;
	while(!S.empty()) {
		u=S.top().first;
		S.pop();
		for(i=0;i<adj[u].size();i++) {
			v=adj[u][i].first;
			w=adj[u][i].second;
			if(visit[v]==0) {
				dist[v]=dist[u]+w;
				mx=max(mx,dist[v]);
				S.push(make_pair(v,dist[v]));
				visit[v]=1;
			}
		}
	}	
	printf("%d\n",mx);
}

int main () 
{
	int n,e,a,b,c;
	int maxi=-999999;
	int i,t;
	scanf("%d",&t);
	while(t--) {
		scanf("%d",&n);
		e=n-1;
		for(i=0;i<e;i++) {
			scanf("%d%d%d",&a,&b,&c);
			adj[a].push_back(make_pair(b,c));
			adj[b].push_back(make_pair(a,c));
		}
		bfs_dfs(1,n);
		for(i=1;i<=n;i++) {
			adj[i].clear();
		}
	}
	return 0;
}