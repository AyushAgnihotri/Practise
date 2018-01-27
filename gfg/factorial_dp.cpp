#include <bits/stdc++.h>
using namespace std;
long long int fact[90];

long long int factorial(int n) 
{
	fact[0]=1;
	if(fact[n]!=0) 
		return fact[n];
	return fact[n]= n*factorial(n-1);
}
int main()
{
	int n,t;
	scanf("%d",&t);
	memset(fact,0,sizeof(fact));
	while(t--) {
		scanf("%d",&n);
		printf("%lld\n",factorial(n));
	}
	return 0;
}