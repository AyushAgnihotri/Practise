#include <bits/stdc++.h>
using namespace std;
# define MAX 1000007
int A[MAX];
int main () 
{
	int n,k,maxi;
	scanf("%d",&n);
	for(int i=0;i<n;i++) {
		scanf("%d",&A[i]);
	}
	scanf("%d",&k);
	for(int i=0;i<=n-k;i++) {
		maxi=0;
		for(int j=i;j<i+k;j++) {
			maxi=max(A[j],maxi);
		}
		printf("%d ",maxi);
	}


	return 0;
}