#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,k,a;
	scanf("%d%d",&n,&k);
	vector<int> v(k);
	for(i=0 ; i<k ; i++) {
		scanf("%d",&a);
		v[i]=a;
	}
	sort(v.begin(),v.end());
	a=9999999;
	for(i=0 ; i<k-n+1 ; i++) {
		a= min(a, v[i+n-1]-v[i]);
	} 
	printf("%d",a);
	return 0;
}