#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	long long int a,res;
	scanf("%d",&t);
	while(t--) {
		scanf("%lld",&a);
		res=(a+1)/2;
		printf("%lld\n",res);
	}
	return 0;
}