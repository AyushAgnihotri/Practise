#include <bits/stdc++.h>
#include <functional>
#define MAX 500005
using namespace std;

int dist[MAX],parent[MAX];
bool discovered[MAX];
priority_queue < pair <int,int> , vector < pair <int,int> >,greater < pair <int,int> > > Q;
vector< pair<int,int> > adj[MAX];	

void dijkstra(vector<pair<int,int> > adj[],int n,int s) ;
int main ()
{
	int i,n,e,q,a,b,s,w,A[MAX];
	scanf("%d%d%d",&n,&e,&q);
	for(i=1;i<=e;i++) {
		scanf("%d%d%d",&a,&b,&w);
		adj[a].push_back(make_pair(w,b));
		adj[b].push_back(make_pair(w,a));
	}
	for(i=0;i<q;i++) {
		scanf("%d",&s);
		dijkstra(adj,n,s);
	}
	return 0;
}

void dijkstra(vector< pair<int,int> > adj[],int n,int s)  
{
	int i,u,v,w;
	for(i=0;i<n;i++) {
		dist[i]=10000010;
		parent[i]=10000010;
		discovered[i]=0;
	}
	dist[s]=0;
	parent[s]=0;
	Q.push(make_pair(dist[s],s));
	while(!Q.empty()) {
		u=(Q.top()).second;
		Q.pop();
		discovered[u]=1;
		for(i=0;i<adj[u].size();i++) {
			v=adj[u][i].second;
			w=adj[u][i].first;
			if(!discovered[v]) {
				if(dist[v]>dist[u]+w) {
					dist[v]=dist[u]+w;
					parent[v]=u;
					Q.push(make_pair(dist[v],v));
				}
			}
		}
	}

	int maximum;
	for(i=0;i<n;i++) {
		if(dist[i]<10000010) {
			maximum=max(dist[i],maximum);
		}
	}
	int num=count(dist,dist+n,maximum);
	printf("%d %d\n",maximum,num);
}