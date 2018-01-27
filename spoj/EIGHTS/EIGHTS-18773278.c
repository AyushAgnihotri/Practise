#include <bits/stdc++.h>
using namespace std;

int main() {
	long long unsigned int k;
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%llu",&k);
		k=192+(k-1)*250;
		printf("%llu\n",k);
	}
	return 0;
}