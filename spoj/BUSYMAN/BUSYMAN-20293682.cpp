#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector< pair<int,int> >v;
	pair<int,int> prev;
	int i,j,a,b,t,n,cnt;
	scanf("%d",&t);
	while(t--) {
		cnt=1;
		v.clear();
		scanf("%d",&n);
		for(i=0;i<n;i++) {
			scanf("%d%d",&a,&b);
			v.push_back(make_pair(b,a));
		}
		sort(v.begin(),v.end());
		prev=v[0];
		for(i=1;i<n;i++) {
			if(v[i].second>=prev.first) {
				cnt++;
				prev=v[i];
			}
		}
		printf("%d\n",cnt);
	}
	return 0;
}