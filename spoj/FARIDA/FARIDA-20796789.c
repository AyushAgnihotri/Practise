#include <bits/stdc++.h>
using namespace std;
long long int A[10005],dp[10005];
	
int main()
{
	int i,j,t,n;
	scanf("%d",&t);
	for(j=1;j<=t;j++) {
		scanf("%d",&n);
		for(i=0;i<n;i++) {
			scanf("%lld",&A[i]);
		}
		dp[0]=A[0];
		dp[1]=max(A[1],dp[0]);
		for(i=2;i<n;i++) {
				dp[i]=max(dp[i-1],A[i]+dp[i-2]);	
		}
		printf("Case %d: %lld\n",j,dp[n-1]);
	}
	return 0;
}