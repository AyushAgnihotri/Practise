#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int n,a,b,i;
	cin>>s;
	while(s[0]!='0') {
		n=s.length();
		vector<int> dp(n,0);
		dp[0]=1;
		dp[1]=1;
		for(i=2 ; i<n ; i++) {
			a=(s[i]-'0')+((s[i-1]-'0')*10);
			if(s[i]!='0')
				dp[i] = dp[i]+dp[i-1];
			if(a <=26 && a>=10) 
				dp[i] = dp[i] + dp[i-2];
			}
		printf("%d\n",dp[n-1]);		
		s.clear();
		cin>>s;
	}
	return 0;
}