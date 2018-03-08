#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,W,i,j,a,t;
	scanf("%d",&t);
	while(t--) {
		scanf("%d%d",&W,&n);
		vector<int> w(n),v(n);
		for(i=0 ; i<n ; i++)
			cin>>w[i]>>v[i];
		int dp[n+1][W+1];	
		for(i=0 ; i<=n ; i++) {
			for(j=0 ; j<=W ; j++) {
				if(i==0 || j==0)
					dp[i][j] = 0;
				else if(w[i-1] <= j)
					dp[i][j] = max(v[i-1]+dp[i-1][j-w[i-1]], dp[i-1][j]);
				else
					dp[i][j] = dp[i-1][j];
			}
		}
		printf("Hey stupid robber, you can get %d.\n",dp[n][W]);
	}
	return 0;
}