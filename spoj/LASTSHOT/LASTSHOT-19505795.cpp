#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000
vector<int> adj[MAX];
stack<int> S;
int visit[MAX];

int dfs(int src,int n)
{
	int u,v,i;
	int count=0;
	for(i=1;i<=n;i++) {
		visit[i]=0;
	}
	S.push(src);
	while(!S.empty()) {
		u=S.top();
		S.pop();
		for(i=0;i<adj[u].size();i++) {
			v=adj[u][i];
			if(visit[v]==0) {
				S.push(v);
			}
		}
		visit[u]=1;
	}
	for(i=1;i<=n;i++){
		if(visit[i]==1) {
			count++;
		}
	}
	return count;
}

int main () 
{
	int n,e,a,b;
	int maxi=-999999;
	int i;
	scanf("%d%d",&n,&e);
	for(i=0;i<e;i++) {
		scanf("%d%d",&a,&b);
		adj[a].push_back(b);
	}
	for(i=1;i<=n;i++) {
		maxi=max(maxi,dfs(i,n));
	}
	printf("%d",maxi);
	return 0;
}