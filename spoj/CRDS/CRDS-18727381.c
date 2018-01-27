#include <bits/stdc++.h>
using namespace std;
# define MAX 1000007
int A[MAX];
long long int cards(long long int);
int main() {
	int t;
	long long int n,c;
	scanf("%d",&t);
    cards(1000002);
	while(t--) {
		scanf("%lld",&n);
		c=A[n];
		printf("%d\n",c);
	}
	return 0;
}
 
long long int cards(long long int n) 
{
    
	if(n==1) {
		return 2;
	}
	return A[n] = (cards(n-1)%MAX+(3*n-1)%MAX)%MAX;
}  