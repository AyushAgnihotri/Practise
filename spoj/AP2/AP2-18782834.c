#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int a,d,N,T3,T3l,sum,i,t;
	scanf("%lld",&t);
	while(t--) {
		scanf("%lld%lld%lld",&T3,&T3l,&sum);
		N=(2*sum)/(T3+T3l);
		printf("%lld\n",N);
		d=(T3l-T3)/(N-5);
		a=T3-(2*d);
		for(i=0;i<N;i++)
			printf("%lld ",a+i*d);
	}
	return 0;
}