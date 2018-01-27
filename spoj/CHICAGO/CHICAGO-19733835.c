#include <bits/stdc++.h>
using namespace std;
long double w,adj[107][107];
int main()
{
	long double res;
	int n,e,u,v,i,j,k;
	scanf("%d",&n);
	while(n!=0) {
		scanf("%d",&e);
		memset(adj,0,sizeof(adj));
	    for(i=1;i<=e;i++) {
	        scanf("%d%d%Lf",&u,&v,&w);
	        adj[u][v]=(w/100.0);
	        adj[v][u]=(w/100.0);
	    }
	    for(k=1;k<=n;k++) {
	        for(i=1;i<=n;i++) {
	            for(j=1;j<=n;j++) {
	                    adj[i][j] = max(adj[i][j],adj[i][k]*adj[k][j]);
	            }
	        }
	    }
	    res=(adj[1][n])*100;
	    cout<<setprecision(6);
	    cout<<fixed;
	    cout<<res<<' '<<"percent"<<endl;
	    scanf("%d",&n);
	}
	return 0;
}