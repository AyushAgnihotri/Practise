#include <bits/stdc++.h>
using namespace std;

long long int fib[1008];
long long int fibonacci(int n)
{
	fib[0]=0;
	fib[1]=1;
	if(fib[n]==0 && n>1) 
		return fib[n]=fibonacci(n-1)+fibonacci(n-2);
	return fib[n];
	
}
int main()
{
	int n;
	memset(fib,0,sizeof(fib));
	while(scanf("%d",&n) && (char)n!=EOF) {
		printf("%lld\n",fibonacci(n));
	}
	return 0;
}