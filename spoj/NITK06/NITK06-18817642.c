#include <bits/stdc++.h>
using namespace std;
#define MAX 100005
long int A[MAX];
int main() {
	int t,n,i;
	bool flag=0;
	scanf("%d",&t);
	while(t--) {
		flag=0;
		scanf("%d",&n);
		for(i=0;i<n;i++) {
			scanf("%ld",&A[i]);
		}
		for(i=0;i<n-1;i++) {
			A[i+1]=abs(A[i+1]-A[i]);
			A[i]=0;
		}
		for(i=0;i<=n-1;i++){
			if(A[i]!=0)
				flag=1;
		}
		if(flag==0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}