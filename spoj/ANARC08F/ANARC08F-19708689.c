#include <bits/stdc++.h>
using namespace std;
vector < pair<long long int,long long int> > adj1[10008],adj2[10008];
priority_queue < pair<long long int,long long int> , vector< pair<long long int,long long int> >, greater < pair<long long int,long long int> > > Q;
long long int dist[10008],dist1[10008],visit[10008];
long long int c,n;
void dijkstra(long long int src,long long int dest)
{
	long long int sz;
	long long int u,v,w,i;
	for(i=0;i<n;i++) {
		visit[i]=0;
		dist[i]=1000000007009;
	}
	dist[src]=0;
	Q.push(make_pair(dist[src],src));
	while(!Q.empty()) {
		u=(Q.top()).second;
		Q.pop();
		sz=adj1[u].size();
		for(i=0;i<sz;i++) {
			v=adj1[u][i].second;
			w=adj1[u][i].first;
			if(dist[v]>dist[u]+w && visit[v]==0) {
				dist[v]=dist[u]+w;
				Q.push(make_pair(dist[v],v));
			}
		}
		visit[u]=1;
	} 
 	for(i=0;i<n;i++) {
		visit[i]=0;
		dist1[i]=1000000007009;
	}
	dist1[dest]=0;
	Q.push(make_pair(dist1[dest],dest));
	while(!Q.empty()) {
		u=(Q.top()).second;
		Q.pop();
		sz=adj2[u].size();
		for(i=0;i<sz;i++) {
			v=adj2[u][i].second;
			w=adj2[u][i].first;
			if(dist1[v]>dist1[u]+w && visit[v]==0) {
				dist1[v]=dist1[u]+w;
				Q.push(make_pair(dist1[v],v));
			}
		}
		visit[u]=1;
	}	
}	

int main()
{
	long long int t_no=1;
	map<string,long long int> mp,mp1;
	map<string,long long int> :: iterator it;
	string s,s1,s2;
	long long int u,v,w,cnt=0,res=0,mul;
	char l1,l2,r1,r2;
	long long int i,r;
	scanf("%lld%lld%lld",&n,&c,&r);
	while(n!=0 || c!=0 || r!=0) {
		cnt=0;
		cin>>s;
		mp.insert(make_pair(s,cnt));
		cnt++;
		s.clear();
		for(i=1;i<=c;i++) {
			cin>>s;
			if(mp.find(s)==mp.end()) {
				mp.insert(make_pair(s,cnt));
				cnt++;
				mp1.insert(make_pair(s,1));
			}
			else
				mp1[s]++;
			s.clear();
		}
		for(i=0;i<r;i++) {
			cin>>s1>>l1>>l2>>w>>r2>>r1>>s2;
			if(mp.find(s1)==mp.end()) {
				mp.insert(make_pair(s1,cnt));
				cnt++;
			}
			if(mp.find(s2)==mp.end()) {
				mp.insert(make_pair(s2,cnt));
				cnt++;
			}
			if(r1=='>' && l1=='-') {
				adj1[mp[s1]].push_back(make_pair(w,mp[s2]));
				adj2[mp[s2]].push_back(make_pair(w,mp[s1]));
			}
			if(r1=='-' && l1=='<') {
				adj1[mp[s2]].push_back(make_pair(w,mp[s1]));
				adj2[mp[s1]].push_back(make_pair(w,mp[s2]));
			}
			if(l1=='<' && r1=='>') {
				adj1[mp[s1]].push_back(make_pair(w,mp[s2]));	
				adj1[mp[s2]].push_back(make_pair(w,mp[s1]));
				adj2[mp[s2]].push_back(make_pair(w,mp[s1]));	
				adj2[mp[s1]].push_back(make_pair(w,mp[s2]));
			}
			s1.clear();
			s2.clear();
		}
		dijkstra(0,0);
		res=0,mul=0;
		for(it=mp1.begin();it!=mp1.end();it++) {
			i=mp[it->first];
			mul=it->second;
			if(dist[i]!=1000000007009&&dist1[i]!=1000000007009)
				res=res+(dist[i]+dist1[i])*mul;
		}
		printf("%lld. %lld\n",t_no,res);
		for(i=0;i<n;i++) {
			adj1[i].clear();
			adj2[i].clear();
		}
		t_no++;
		mp.clear();
		mp1.clear();
		scanf("%lld%lld%lld",&n,&c,&r);	
	}
	return 0;
}