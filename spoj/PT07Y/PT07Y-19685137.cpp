#include <bits/stdc++.h>
using namespace std;
int n,e,u,v,i,j;
vector<int> adj[100007];
queue<int> S;
int visit[100007];
int par[100007];
bool dfs(int src)
{
	for(int k=1;k<=n;k++) {
		visit[k]=0;
		par[k]=-1;
	}
	S.push(src);
	visit[src]=1;
	while(!S.empty()) {
		u=S.front();
		S.pop();
		for(int k=0;k<adj[u].size();k++) {
			v=adj[u][k];
			if(visit[v]==0) {
				visit[v]=1;
				par[v]=u;
				S.push(v);
			}
			else if(v!=par[u]) {
				return 1;
			}
		}
	}
	return 0;
}
int main()
{
	bool flag=0;
	scanf("%d%d",&n,&e);
	for(i=0;i<e;i++) {
		scanf("%d%d",&u,&v);
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	flag=dfs(u);
	if(flag==0) {	
		for(int i=1;i<=n;i++) {
			if(visit[i]==0) {
				flag=1;
				break;
			}
		}
	}
	if(!flag) {
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}
	return 0;
}