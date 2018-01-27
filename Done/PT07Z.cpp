#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000
vector<int> adj[MAX];
queue<int> Q;
int dist[MAX],visit[MAX];
stack<int> S;
void bfs_dfs(int src,int n)
{
	int u,v,i,mx=0,dest;
	int count=0;
	for(i=1;i<=n;i++) {
		visit[i]=0;
		dist[MAX]=INT_MAX;
	}
	dist[src]=0;
	Q.push(src);
	visit[src]=1;
	while(!Q.empty()) {
		u=Q.front();
		Q.pop();
		for(i=0;i<adj[u].size();i++) {
			v=adj[u][i];
			if(visit[v]==0) {
				dist[v]=dist[u]+1;
				mx=max(mx,dist[v]);
				if(mx==dist[v])
					src=v;
				Q.push(v);
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
	S.push(src);
	visit[src]=1;
	while(!S.empty()) {
		u=S.top();
		S.pop();
		for(i=0;i<adj[u].size();i++) {
			v=adj[u][i];
			if(visit[v]==0) {
				dist[v]=dist[u]+1;
				mx=max(mx,dist[v]);
				S.push(v);
				visit[v]=1;
			}
		}
	}	
	printf("%d",mx);
}

int main () 
{
	int n,e,a,b;
	int maxi=-999999;
	int i;
	scanf("%d",&n);
	e=n-1;
	for(i=0;i<e;i++) {
		scanf("%d%d",&a,&b);
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	bfs_dfs(1,n);
	return 0;
}