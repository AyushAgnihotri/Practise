#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,a,n;
	string s;
	cin>>s;
	n=s.length();
	for(i=0;i<n;i++) {
		if(s[i]=='W' && s[i+1]=='U' && s[i+2] =='B') {
			s[i+2]=' ';
			s.erase(i,2);
		}
	}
	cout<<s;
	return 0;
}