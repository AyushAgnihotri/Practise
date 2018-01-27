#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000
vector < pair<int,int> > adj[MAX];
long long i,j,n,m,s,t,d,u,v,w;
long long visit[MAX],dist[MAX];
void dijkstra ()
{
	priority_queue < pair<int,int> , vector < pair<int,int> > , greater < pair<int,int> > > Q;

	for(i=1;i<=n;i++) {
		dist[i]=10000000010010;
		visit[i]=0;
	}
	dist[s]=0;
	visit[s]=0;
	Q.push(make_pair(dist[s],s));
	
	while(!Q.empty()) {
		u=Q.top().second;
		Q.pop();

		for(i=0;i<adj[u].size();i++) {
			v=adj[u][i].second;
			w=adj[u][i].first;

			if(visit[v]==0 && dist[v]>dist[u]+w) {
				dist[v]=dist[u]+w;
				Q.push(make_pair(dist[v],v));
			}
		}
		visit[u]=1;
	}

}

int main()
{
	long long prev=0;
	scanf("%lld",&t);
	while(t--) {
		for(i=0;i<=prev;i++) {
			adj[i].clear();
		} 
		scanf("%lld%lld%lld%lld",&n,&m,&s,&d);
		prev=n;
		for(i=0;i<m;i++) {
			scanf("%lld%lld%lld",&u,&v,&w);
			adj[u].push_back(make_pair(w,v));
			adj[v].push_back(make_pair(w,u));
		}
		dijkstra();
		if(dist[d]!=10000000010010)
			printf("%lld\n",dist[d]);
		else
			printf("NONE\n");
		
	}
	return 0;
}