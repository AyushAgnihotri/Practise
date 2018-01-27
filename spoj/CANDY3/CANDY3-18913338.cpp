#include <bits/stdc++.h>
int main () {
	long long int n,t,i,waste,heap;
	char none;
	scanf("%lld",&t);
	while (t--) {
		heap=0;
		scanf("%c",&none);
		scanf("%lld",&n);
		for(i=0;i<n;i++) {
			scanf("%lld",&waste);
			heap=(heap%n + waste%n)%n;
		}
		if(heap%n==0) 
			printf("YES\n");
		else
			printf("NO\n");

	}
	return 0;
}