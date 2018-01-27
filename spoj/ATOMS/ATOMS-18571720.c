#include <bits/stdc++.h>
using namespace std;

int main() {
	long p,t;
	long long n,m,k;
	scanf("%d",&p);
	while(p--) {
		scanf("%lld%lld%lld",&n,&k,&m);
		t=0;
		while (n<=m/k) {
			m=m/k;
			t++;
		}
		printf("%d\n",t);
	}
	return 0;
}