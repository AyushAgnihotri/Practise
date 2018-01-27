#include <bits/stdc++.h>
using namespace std;
#define MAX 10000007
vector< pair<long long,long long> > adj1[MAX],adj2[MAX];

long long dist[MAX],dist1[MAX],visit[MAX];
long long n,i,m,k,s,t,u,v,w,data_set,prv=0;

priority_queue < pair <long long,long long>, vector < pair <long long,long long> > , greater< pair <long long,long long> > > Q;

void dijkstra(long long src, long long dest)
{
	for(i=1;i<=n;i++) {
		visit[i]=0;
		dist[i]=1061109567;
	}

	dist[src]=0;

	Q.push(make_pair(dist[src],src));
	visit[src]=1;

	while(!Q.empty()) {

		u=(Q.top()).second;
		Q.pop();

		for(i=0;i<adj1[u].size();i++) {

			v=adj1[u][i].second;
			w=adj1[u][i].first;

			if(dist[v]>dist[u]+w && visit[v]==0) {
				dist[v]=dist[u]+w;
				Q.push(make_pair(dist[v],v));
				visit[v]=1;
			}
		}
	}



	for(i=1;i<=n;i++) {
		visit[i]=0;
		dist1[i]=1061109567;
	}

	dist1[dest]=0;
	Q.push(make_pair(dist1[dest],dest));

	visit[dest]=1;

	while(!Q.empty()) {

		u=(Q.top()).second;
		Q.pop();
		for(i=0;i<adj2[u].size();i++) {

			v=adj2[u][i].second;
			w=adj2[u][i].first;

			if(dist1[v]>dist1[u]+w && visit[v]==0) {
				dist1[v]=dist1[u]+w;
				Q.push(make_pair(dist1[v],v));
				visit[v]=1;
			}
		}
	}
}	


int main ()
{
	long long best=1061109567;
	scanf("%lld",&data_set);
	while(data_set--) {
		best=1061109567;
		for(i=0;i<=prv;i++) {
			adj1[i].clear();
			adj2[i].clear();
		}
		scanf("%lld%lld%lld%lld%lld",&n,&m,&k,&s,&t);
		prv=n;
		for(i=0;i<m;i++) {
			scanf("%lld%lld%lld",&u,&v,&w);
			adj1[u].push_back(make_pair(w,v));
			adj2[v].push_back(make_pair(w,u));
		}

		dijkstra(s,t);

		for(i=0;i<k;i++) {
			scanf("%lld%lld%lld",&u,&v,&w);
			best=min(best,min(dist[t],min(dist[u]+w+dist1[v],dist[v]+w+dist1[u])));
		}
		
		if(best==1061109567) 
			printf("-1\n");
		else
			printf("%lld\n",best);
	}

	return 0;
}