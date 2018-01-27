#include <bits/stdc++.h>
using namespace std;
int main()
{
	map<int,int> mp;
	int n,i,a;
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
		scanf("%d",&a);
		mp.insert(make_pair(a,i));
	}
	for(i=1;i<=n;i++) {
		printf("%d ",mp[i]);
	}
}