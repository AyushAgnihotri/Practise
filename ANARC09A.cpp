#include <bits/stdc++.h>
using namespace std;
int main()
{
	int cnt=0,n,i,j=0,open,close;
	char a;
	stack<char> st;
	string s;
	cin>>s;
	while(s[0]!='-') {
		j++;
		cnt=0;
		open=0;
		close=0;
		n=s.length();
		for(i=0;i<n;i++) {
			if(s[i]=='{')
				open++;
			else {
				if(open!=0)
					open--;
				else {
					open++;
					cnt++;
				}
			}
		}
		cnt = cnt + open/2;
		printf("%d. %d\n",j,cnt);
		s.clear();
		cin>>s;
	}
	return 0;
}