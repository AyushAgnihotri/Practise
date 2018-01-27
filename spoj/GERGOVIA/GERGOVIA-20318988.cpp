#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,i,x,res=0,wine;
	scanf("%lld",&n);
	while(n!=0) {
		res=0;
		scanf("%lld",&wine);
		for(i=1;i<n;i++) {
			scanf("%lld",&x);
			res=res+abs(wine);
			wine=wine+x;
		}
		printf("%lld\n",res);
		scanf("%lld",&n);
	}
	return 0;
}