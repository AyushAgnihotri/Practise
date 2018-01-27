#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,a,k,mx,cnt,i;
	vector <int> v;
	vector <int> :: iterator it;
	scanf("%d",&t);
	while(t--) {
		scanf("%d%d",&n,&k);
		for(i=0;i<n;i++) {
			scanf("%d",&a);
			v.push_back(a);
		}
		sort(v.begin(),v.end());
		for(i=0;i<n-1;i++) {
			v[i+1]=v[i+1]+v[i];
		}
		it=lower_bound(v.begin(),v.end(),k);
		printf("%d %d\n",(int)*it,(int)(it-v.begin())+1);
		v.clear();
	}
	return 0;
}