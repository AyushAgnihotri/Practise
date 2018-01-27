#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a_prev,i,n,a,b,c,gcd=1,res=0;
	scanf("%lld",&n);
	scanf("%lld",&a);
	gcd=a;
	for(i=1;i<n;i++) {
		a_prev=a;
		scanf("%lld",&a);
		if(a_prev>a) {
			res=res + gcd;
		}
		else {
			gcd=__gcd(gcd,a);
		}
	}
	printf("%lld",res);
	return 0;
}