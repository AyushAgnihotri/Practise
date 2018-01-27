#include <bits/stdc++.h>
using namespace std;
#define MAX 1002
long int A[MAX];
int main() {
	int n,t;
	long int i,sum,ans;
	scanf("%d",&t);
	while(t--) {
		sum=0;
		ans = 1e11;
		scanf("%d",&n);
		for(i=0;i<n;i++) {
			scanf("%ld",&A[i]);
			sum=sum+A[i];
			ans = min(ans,sum);
		}
		printf("%ld\n",(ans <= 0 ? ((-ans)+1 ): 0));
		}
	return 0;
}