#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,t;
	long int num,i,sum,ans;
	scanf("%d",&t);
	while(t--) {
		sum=0;
		ans = 1e11;
		scanf("%d",&n);
		for(i=0;i<n;i++) {
			scanf("%ld",&num);
			sum=sum+num;
			ans = min(ans,sum);
		}
		printf("%ld\n",(ans <= 0 ? ((-ans)+1 ): 0));
		}
	return 0;
}