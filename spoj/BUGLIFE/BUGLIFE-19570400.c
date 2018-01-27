#include <bits/stdc++.h>
using namespace std;
#define MAX 10000007

vector<int> adj[MAX];

int visit[MAX],color[MAX];
int cnt=1;


bool is_bipartite(int src,int n)
{
	
	queue<int> Q;
	
	int u,v,i;
	
	color[src] = 1;
	
	Q.push(src);
	
	while(!Q.empty()) {
	
		u=Q.front();
		Q.pop();
	
		for(i=0;i<adj[u].size();i++) {
	
			v=adj[u][i];
	
			if(visit[v]==0 && color[v]==-1) {
	
				color[v]=1-color[u];
				Q.push(v);
	
			}
			else if (visit[v]==0 && color[v]==color[u])
				return false;
	
		}
	
		visit[u]=1;
	
	}
	
	return true;

}



int main() 
{
	
	int i,prev=0,j,s,t,n,e,a,b;
	bool flag=0;
	scanf("%d",&t);
	
	while(t--) {
	
		for(i=0;i<=prev;i++) {
			adj[i].clear();
		}
	
		scanf("%d%d",&n,&e);
	
		prev=n;
	
		for(i=1;i<=e;i++) {
			scanf("%d%d",&a,&b);
			adj[a].push_back(b);
			adj[b].push_back(a);
		} 
	
		printf("Scenario #%d:\n",cnt);
		
		for(i=1;i<=n;i++) {
			color[i]=-1;
			visit[i]=0;
		}

		for(i=1;i<=n;i++) {
			if(visit[i]==0) {
				s=i;
				flag=is_bipartite(s,n);
			}
			if(!flag) 
				break;
		}
		if(flag){
			printf("No suspicious bugs found!\n");
		}
		else {
			printf("Suspicious bugs found!\n");
		}
	
		cnt++;
	
	}
	return 0;
}	