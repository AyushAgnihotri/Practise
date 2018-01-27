#include <bits/stdc++.h>
using namespace std;
long long int factorial(int n)
{
	if(n==0) 
		return 1;
	return (long long int)n*factorial(n-1);
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%lld",factorial(n));
	return 0;
}