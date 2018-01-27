#include <bits/stdc++.h>
using namespace std;
int main ()
{
	long long int t,n,a,b,hcf;
	scanf("%lld",&t);
	while(t--) {
		scanf("%lld%lld%lld",&n,&a,&b);
		hcf=__gcd(a,b);
		for(int i=0;i<hcf;i++) {
			printf("%lld",n);
		}
		printf("\n");
	}
	return 0;
}