#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	string a,b;
	scanf("%d",&t);
	while(t--) {
		cin>>a;
		b=a;
		reverse(b.begin(),b.end());
		if(b==a)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}