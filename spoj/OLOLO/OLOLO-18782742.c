#include <bits/stdc++.h>
using namespace std;
# define MAX 500005
long int A[MAX];
int main() {
	long int i,n,t;
	scanf("%ld",&n);
	for(i=0;i<n;i++){
		scanf("%ld",&A[i]);
	}
	for(i=1;i<n;i++) {
		A[0]=A[0]^A[i];	
	}
	printf("%ld",A[0]);
	return 0;
}