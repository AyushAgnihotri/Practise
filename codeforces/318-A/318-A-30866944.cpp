#include <bits/stdc++.h>
using namespace std;
int main()
{
	long double n,k;
	scanf("%Lf%Lf",&n,&k);
	if(k<=ceil(n/2)) {
		printf("%lld",(long long int)(2*k-1));
	}
	else {
		k=k- ceil(n/2) ;
		printf("%lld",(long long int)(2*k));
	}
	return 0;
}