#include <bits/stdc++.h>
using namespace std;
#define MAX 1005
long int A[MAX];
int main() {
	int n,t;
	long int i,cc,sum,count,ans;
	scanf("%d",&t);
	while(t--) {
		sum=0,count=0;
		scanf("%d",&n);
		for(i=0;i<n;i++) {
			scanf("%ld",&A[i]);
		}
		ans = 1e11;
		for(i=0;i<n;i++) {
			sum=sum+A[i];
			//if(sum<0)
			//	count=count+abs(sum);
			ans = min(ans,sum);
		}
		printf("%ld\n",(ans <= 0 ? ((-ans)+1 ): 0));
		
	}
	return 0;
}