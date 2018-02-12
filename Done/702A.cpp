#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,a=1;
	scanf("%d",&n);
	vector<int> v(n),dp(n+1);
	for(i=0 ; i<n ; i++) 
		cin>>v[i];
	dp[0]=1;
	for(i=1;i<n;i++) {
		if(v[i]>v[i-1])
			dp[i]=dp[i-1]+1;
		else
			dp[i]=1;
		a=max(a,dp[i]);
	}
	printf("%d",a);
	return 0;
}