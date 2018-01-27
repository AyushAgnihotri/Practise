#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v;
	int i,n,l,a;
	double ans=0.0;
	cout<<setprecision(10);
	cout<<fixed;
	scanf("%d%d",&n,&l);
	for(i=0;i<n;i++) {
		scanf("%d",&a);
		v.push_back(a);
	}
	sort(v.begin(),v.end());
	vector<int> :: iterator it,it1;
	it=v.begin();
	ans = *it-0;
	for(it1=v.begin()+1;it1!=v.end();it1++) {
		ans = max(ans, (double)(*it1 - *it)/2);
		it=it1;
	}
	ans=max(ans,(double)l-(*it));
	cout<<ans;
	return 0;
}