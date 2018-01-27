#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,q,a,i,j,k;
	scanf("%lld%lld",&n,&q);
	vector<long long int> v(n);
	for(i=0;i<n;i++) {
		scanf("%lld",&v[i]);
	}
	while(q--) {	
		scanf("%lld",&j);
		if(j==1) {
			scanf("%lld%lld",&k,&a);
			v.insert(v.begin()+k-1,a);
		}
		else if(j==2) {
			scanf("%lld",&k);
			v.erase(v.begin()+k-1);
		}
		else if(j==3) {
			scanf("%lld",&k);
			printf("%lld\n",v[k-1]);
		}
	}

	return 0;
}