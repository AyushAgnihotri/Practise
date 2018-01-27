#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	long long n,z=0;
	long c=0;
	long i=5;
	scanf("%d",&t);
	
	while(t--){
		z = 0;
		i = 5;
		scanf("%lld",&n);
		while(1) {
			if(n/i==0) 
				break;
			z=z+n/i;
			i *= 5;
		}
		
		printf("%ld\n",z);
	}
	return 0;
	}