#include <bits/stdc++.h>
using namespace std;
int main() {
	long int n,t,ter=1,num,i,sum,ans;
	scanf("%ld",&t);
	while(t--) {
		sum=0;
		ans = 1e11;
		scanf("%ld",&n);
		for(i=0;i<n;i++) {
			scanf("%ld",&num);
			sum=sum+num;
			ans = min(ans,sum);
		}
		printf("Scenario #%ld: %ld\n",ter,(ans <= 0 ? ((-ans)+1 ): 1));
		ter++;
	}
	return 0;
} 