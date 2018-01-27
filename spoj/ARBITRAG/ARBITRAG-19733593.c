#include <bits/stdc++.h>
using namespace std;
#define INF 9999999
int cnt=1;
long double adj[300][300],adj1[300][300];
int main()
{
	string s;
	long double w;
    int n,e,q,u,v,i,j,k;
    map<string,int> mp;
    scanf("%d",&n);
    while(n!=0) {
    	mp.clear();
	    for(i=1;i<=n;i++) {
	        for(j=1;j<=n;j++) {
	            if(i==j) {
	                adj[i][j]=0;
	                adj1[i][j]=0;
	            }
	            else {
	                adj[i][j]=INF;
	            	adj1[i][j]=INF;
	            }
	        }
	    }
	    for(i=1;i<=n;i++) {
	    	cin>>s;
	    	mp.insert(make_pair(s,i));
	    }
	    scanf("%d",&e);
	    for(i=1;i<=e;i++) {
	    	cin>>s;
	    	u=mp[s];
	    	s.clear();
	    	scanf("%Lf",&w);
	    	cin>>s;
	    	v=mp[s];
	    	s.clear();
	    	adj[u][v]=w;
	    	adj1[u][v]=w;
	    }
	    for(k=1;k<=n;k++) {
	        for(i=1;i<=n;i++) {
	            for(j=1;j<=n;j++) {
	                    adj1[i][j] = max(adj1[i][j],adj1[i][k]*adj1[k][j]);
	            }
	        }
	    }
	    bool flag=0;
	    for(i=1;i<=n;i++) {
	    	if(adj1[i][i]>1.0)
	    		break;
	    }
	    if(i==n+1) {
	    	printf("Case %d: No\n",cnt);
	    }
	    else {
	    	printf("Case %d: Yes\n",cnt);	
	    }
	    cnt++;
	    scanf("%d",&n);
    }
    return 0;
}