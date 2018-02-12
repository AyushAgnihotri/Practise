#include <bits/stdc++.h>
using namespace std;
int main()
{
	int cnt=0,i,j,n,k,a;
	scanf("%d%d",&n,&k);
	vector<int> v(n),dp(n);
	for(i=0 ; i<n ; i++) 
		cin>>v[i];
	for(i=0;i<k;i++) 
		cnt = cnt+v[i];
	dp[0] = cnt;
	a=cnt;
	for(i=1;i<=n-k;i++) {
		dp[i] = dp[i-1]-v[i-1]+v[i+k-1];
		a = min(a,dp[i]); 
	}
	for(i=0;i<=n-k;i++) 
		if(dp[i]==a) {
			printf("%d",i+1);
			return 0;
		}
	return 0;
}