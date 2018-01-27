#include <bits/stdc++.h>
using namespace std;
int adj[5000][5000],degree[5000];
int main()
{
	memset(adj,0,sizeof(adj));
	memset(degree,0,sizeof(degree));
	int u,v,i,n,m,cnt=999999;
	scanf("%d%d",&n,&m);
	for(i=0;i<m;i++) {
		scanf("%d%d",&u,&v);
		adj[u][v]=1;
		adj[v][u]=1;
		degree[u]++;
		degree[v]++;
	}
	for(u=1;u<=n;u++) {
		for(v=u;v<=n;v++) {
			if(adj[u][v]==1) {
				for(i=v;i<=n;i++){
					if(adj[u][i]==1 && adj[v][i]==1)
						cnt=min(degree[u]-2+degree[v]-2+degree[i]-2,cnt);
				}
			}
		}
	}
	if(cnt!=999999)
		printf("%d",cnt);
	else
		printf("-1");
	return 0;
}