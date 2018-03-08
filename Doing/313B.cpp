#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,l,r,a,i,j;
	string s;
	cin>>s;
	n=s.length();
	vector <int> dp(n);
	cin>>k;
	for(i=1;i<n;i++) {
		if(s[i]==s[i-1]) 
			dp[i] = dp[i-1]+1;
		else
			dp[i] = dp[i-1];
	}
	while(k--) {
		cin>>l>>r;
		cout<<dp[r-1]-dp[l-1]<<endl;
	}
	return 0;
}