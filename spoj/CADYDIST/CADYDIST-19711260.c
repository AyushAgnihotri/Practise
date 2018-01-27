#include <bits/stdc++.h>
using namespace std;
vector<long long int> v1,v2;
long  long int n,i,a,res=0;
int main()
{
	scanf("%lld",&n);
	while(n!=0) {
		for(i=0;i<n;i++) {
			scanf("%lld",&a);
			v1.push_back(a);
		}

		for(i=0;i<n;i++) {
			scanf("%lld",&a);
			v2.push_back(a);
		}
		sort(v1.begin(),v1.end());
		sort(v2.begin(),v2.end());
		reverse(v2.begin(),v2.end());
		res=0;
		for(i=0;i<n;i++) {
			res=res+(v1[i]*v2[i]);
		}
		printf("%lld\n",res);
		v1.clear(),v2.clear();
		scanf("%lld",&n);
	}
}