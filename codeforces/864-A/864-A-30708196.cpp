#include <bits/stdc++.h>
using namespace std;
int main()
{
	bool flag=0;
	int n,a,i;
	map<int,int> mp;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		scanf("%d",&a);
		if(mp.find(a)==mp.end()) {
			mp.insert(make_pair(a,1));
		}
		else
			mp[a]++;
	}
	map<int,int> :: iterator it1,it2;
	for(it1=mp.begin();it1!=mp.end();it1++) {
		for(it2=mp.begin();it2!=mp.end();it2++) {
			if(it1->second == it2->second && it1->first!=it2->first && it1->second+it2->second==n) {
				printf("YES\n");
				printf("%d %d",it1->first,it2->first);
				flag=1;
				break;
			}
		}
		if(flag)
			break;
	}
	if(!flag) 
		printf("NO");
	return 0;
}