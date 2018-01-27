#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s,s1,s2;
	cin>>s1;
	cin>>s2;
	cin>>s;
	s1=s1+s2;
	sort(s.begin(),s.end());
	sort(s1.begin(),s1.end());
	if(s==s1)
		printf("YES");
	else
		printf("NO");

	return 0;
}