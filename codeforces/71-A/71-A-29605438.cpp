#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int len,t;
	scanf("%d",&t);
	while(t--) {
		cin>>s;
		len=s.length();
		if(len>10) {
			printf("%c%d%c\n",s[0],len-2,s[len-1]);
		}
		else{
			cout<<s<<endl;
		}
		s.clear();
	}
	return 0;
}