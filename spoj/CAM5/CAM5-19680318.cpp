#include <bits/stdc++.h>
using namespace std;
vector<int> adj[100005];
int visit[100005];
stack<int> S;
int t,n,i,e,u,v,a;
	
void dfs()
{

	visit[a]=1;
	S.push(a);
	while(!S.empty()) {
		u=S.top();
		S.pop();
		for(i=0;i<adj[u].size();i++) {
			v=adj[u][i];
			if(visit[v]==0) {
				visit[v]=1;
				S.push(v);
			}
		}
	}
}
int bullshit() {
	int cn=0;
	for(i=0;i<n;i++) {
		visit[i]=0;
	}
	for(int j=0;j<n;j++) {
		if(visit[j]==0) {
			a=j;
			dfs();
			cn++;
		}
	}
	return cn;
}
int main()
{
	int cnt;
	scanf("%d",&t);
	while(t--) {
		scanf("%d",&n);
		scanf("%d",&e);
		if(e!=0) {
			for(i=0;i<e;i++) {
				scanf("%d%d",&u,&v);
				adj[u].push_back(v);
				adj[v].push_back(u);
			}
		}
		if(e==0) {
			printf("%d\n",n);
		}
		else {
			cnt=bullshit();
			printf("%d\n",cnt);
		}
		for(i=0;i<n;i++) 
			adj[i].clear();
	}
	return 0;
}