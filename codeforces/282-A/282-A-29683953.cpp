#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,x=0;
	string s;
	scanf("%d",&t);
	while(t--) {
		s.clear();
		cin>>s;
		if(s[1]=='+') 
			x++;
		else if(s[1]=='-')
			x--;
	}
	printf("%d",x);
	return 0;
}