#include <bits/stdc++.h>
using namespace std;
#define MAX 1005
int A[MAX],B[MAX];
int main() {
	int t,n,i;
	long int sum;
	scanf("%d",&t);
	while(t--){
		sum=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)  {
			scanf("%d",&A[i]);
		}
		for(i=0;i<n;i++)  {
			scanf("%d",&B[i]);
		}
		std::sort(A,A+n);
		std::sort(B,B+n);
		for(i=0;i<n;i++)  {
			sum=sum+A[i]*B[i];
		}
		printf("%ld\n",sum);
	}
	return 0;
}