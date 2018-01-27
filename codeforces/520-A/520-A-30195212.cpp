#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	string s;
	set<char> st;
	scanf("%d",&n);
	cin>>s;

	for(string :: iterator it=s.begin();it!=s.end();it++)
		st.insert(tolower(*it));
	if(st.size()==26)
		printf("YES");
	else
		printf("NO");
	return 0;
}