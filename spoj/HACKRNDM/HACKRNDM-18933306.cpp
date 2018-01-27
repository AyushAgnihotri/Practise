#include <bits/stdc++.h>
#define MAX 10000007
using namespace std;
int main()
{
	bool b=0;
	long long int i,n,k,A[MAX],count=0;
	scanf("%lld%lld",&n,&k);
	for(i=0;i<n;i++) {
		scanf("%lld",&A[i]);
	}
	sort(A,A+n);
	for(i=0;i<n;i++) {
		b=binary_search(A,A+n,A[i]+k);
		if(b)
			count++;
	}
	printf("%lld",count); 
	return 0;
}