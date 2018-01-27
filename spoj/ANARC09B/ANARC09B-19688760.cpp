#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int a,b,hcf;
	scanf("%lld%lld",&a,&b);
	while(a!=0 && b!=0) {
		hcf=__gcd(a,b);
		printf("%lld\n",((a*b)/hcf)/hcf);
		scanf("%lld%lld",&a,&b);
	}
}