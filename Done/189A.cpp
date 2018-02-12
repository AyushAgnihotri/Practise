#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int n, a, b, c, rem, i ;
	scanf("%d%d%d%d",&n,&a,&b,&c);
	vector<int> dp(4001,0);
	dp[a]=1;
	dp[b]=1;
	dp[c]=1;
	for(i=1 ; i<=n ; i++) {
		if(i-a >= 0)
			if(dp[i-a]!=0) 
				dp[i]= max(dp[i],1+dp[i-a]);
		if(i-b >= 0)
			if(dp[i-b]!=0) 
				dp[i]= max(dp[i],1+dp[i-b]);
		if(i-c >= 0 )
			if(dp[i-c]!=0)
				dp[i]= max(dp[i],1+dp[i-c]);
	}
	printf("%d",dp[n]);
	return 0;
}