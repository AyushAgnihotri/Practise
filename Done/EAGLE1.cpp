#include <bits/stdc++.h>
using namespace std;
#define MAX 100007
vector< pair<long long int,long long int> > adj[MAX];
long long int dist[MAX],visit[MAX];
stack< pair<long long int,long long int> > Q,S;
void dfs(long long int src,long long int n)
{
	long long int u,v,i,mx=-100000010100,dest=src,w;
	for(i=1;i<=n;i++) {
		visit[i]=0;
		dist[MAX]=100000010100;
	}
	dist[src]=0;
	Q.push(make_pair(src,dist[src]));
	visit[src]=1;
	while(!Q.empty()) {
		u=Q.top().first;
		Q.pop();
		for(i=0;i<adj[u].size();i++) {
			v=adj[u][i].first;
			w=adj[u][i].second;
			if(visit[v]==0) {
				dist[v]=dist[u]+w;
				mx=max(mx,dist[v]);
				if(mx==dist[v])
					dest=v;
				Q.push(make_pair(v,dist[v]));
				visit[v]=1;
			}
		}
	}
	printf("%lld ",dist[dest]);
}

int main () 
{
	long long int t;
	long long int n,e,u,v,w;
	long long int i;
	scanf("%lld",&t);
	while(t--) {
		scanf("%lld",&n);
		e=n-1;
		for(i=0;i<e;i++) {
			scanf("%lld%lld%lld",&u,&v,&w);
			adj[u].push_back(make_pair(v,w));
			adj[v].push_back(make_pair(u,w));
		}
		for(i=1;i<=n;i++) {		
			dfs(i,n);	
		}
		printf("\n");
		for(i=0;i<=n;i++) {
			adj[i].clear();
		} 
	}
	return 0;
} 