#include <bits/stdc++.h>
using namespace std;
int n;
int a[2003][2003];
vector <int> adj[2003];
int vis[2003];
int findCycle(int src) {
	int u,v,i,j;
	queue <int> Q;
	vis[src] = 0;
	Q.push(src);
	while(!Q.empty()) {
		u = Q.front();
		Q.pop();
		for(i=0;i<adj[u].size();i++) {
			v=adj[u][i];
			if(vis[v]==-1) {
				vis[v]=vis[u]+1;
				Q.push(v);
			}
			else if(vis[v]==0)
				return vis[u]+1;
		}
	}
	return -1;
}
int main() {
	int i,j,res;
	bool flag;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++) {
			scanf("%d",&a[i][j]);
			if(a[i][j]==1)
				adj[i].push_back(j);
		}
	for(i=1;i<=n;i++) {
		if(a[i][i]==1) {
			printf("1\n");
			continue;
		}
		else  {
			flag=0;
			for(j=1;j<=n;j++) {
				if(j!=i && a[i][j]==1 && a[j][i]==1) {
					flag = true;
					break;
				}
			}
			if(flag) {
				printf("2\n");;
				continue;
			}
		}
		memset(vis,-1,sizeof(vis));
		res=findCycle(i);
		if(res==-1)
			printf("NO WAY\n");
		else
			printf("%d\n",res);
	}
} 