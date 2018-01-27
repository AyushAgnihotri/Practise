#include <bits/stdc++.h>
using namespace std;
int main() {
	long long int sum=0;
	int n,i;
	while(1){
		scanf("%d",&n);
		sum=0;
		if(n==0)
			break;
		else 
			for(i=1;i<=n;i++) {
				sum=sum+i*i;
			}
			printf("%lld\n",sum);
	}
	return 0;
}