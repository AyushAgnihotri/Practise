#include <bits/stdc++.h>
using namespace std;
long long int facto(long long int n)
{
  return (n == 1 || n == 0) ? 1 : facto(n - 1) * n;
}	
int main() 
{
	long long int i,ans=0,a,perm,n,cnt=0;
	scanf("%lld",&n);
	vector<long long int> v(n);
	for(i=0;i<n;i++)  {
		scanf("%lld",&a);
		v[i]=a;
	}
	perm=facto(n);
	cout<<"Factorial is"<<perm<<endl;
	while(perm--) {
		cnt=0;
		for(i=0;i<n-1;i++) {
			cnt = cnt + __gcd(v[i],v[i+1]);
		}
		cout<<cnt<<endl;
	ans=max(ans,cnt);
	next_permutation(v.begin(),v.end());
	}
	printf("%lld",ans);
	return 0;
}