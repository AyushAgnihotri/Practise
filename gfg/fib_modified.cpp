#include <bits/stdc++.h>
using namespace std;
int t1,t2;
long long int fib[1008];
long long int fibonacci(int n)
{
	fib[0]=t1;
	fib[1]=t2;
	if(fib[n]==-1 && n>1) 
		return fib[n]=(fibonacci(n-1)*fibonacci(n-1))+fibonacci(n-2);
	return fib[n];
	
}
int main()
{
	int n;
	memset(fib,-1,sizeof(fib));
	scanf("%d%d%d",&t1,&t2,&n);
	printf("%lld\n",fibonacci(n-1));
	return 0;
}

def fibonacci(n) :
	fib[0]=t1
	fib[1]=t2
	if(fib[n]==-1 && n>1) :
		return fib[n]=(fibonacci(n-1)*fibonacci(n-1))+fibonacci(n-2)
	return fib[n]


t1,t2,n = map(int,input())
fib = list([-1]*1000000000008)