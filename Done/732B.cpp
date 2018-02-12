#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,i,cnt=0;
	vector<int> dp(n),v(n);
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++) 
		cin>>v[i];
	dp[0] = v[0];
	for(i=1;i<n;i++) {
		dp[i] = max(k-dp[i-1],v[i]);
		cnt=cnt+dp[i]-v[i]; 
	}
	cout<<cnt<<endl;
	for (i=0;i<n;i++)
		cout<<dp[i]<<" ";
	return 0;
}