#include <bits/stdc++.h>
#define MAX 500005
using namespace std;

int dist[MAX],parent[MAX];
bool discovered[MAX];
priority_queue < pair <int,int> , vector < pair <int,int> >,greater < pair <int,int> > > Q;
vector< pair<int,int> > adj[MAX];	

void dijkstra(vector< pair<int,int> > adj[],int n,int s,int d)  
{
	int i,u,v,w;
	for(i=1;i<=n;i++) {
		dist[i]=200000;
		discovered[i]=0;
	}
	dist[s]=0;
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
					Q.push(make_pair(dist[v],v));
				}
			}
			if(discovered[d])
				break;
		}
	}
	printf("%d\n",dist[d]);
}

int main () 
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	map <string,int> mp;
	int t,i,n,e,nt,nr,r,s,d,cost;
	char NAME[15],NAME1[15],NAME2[15];
	cin>>t;
	while(t--) {
		mp.clear();
		
		cin>>n;
		for(i=1;i<=n;i++) {
			cin>>NAME;
			mp.insert(make_pair(NAME,i));
			cin>>e;
			while(e--) {
				cin>>nr>>cost;
				adj[i].push_back(make_pair(cost,nr));
				adj[nr].push_back(make_pair(cost,i));
			}
		}
		cin>>r;
		while(r--) {
			cin>>NAME1>>NAME2;
			s=mp[NAME1];
			d=mp[NAME2];
			dijkstra(adj,n,s,d);
		}
		for(i=1;i<=n;i++) {
			adj[i].clear();
		}
	}
	return 0;
}