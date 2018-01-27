#include <bits/stdc++.h>
using namespace std;
int main()
{	
	bool flag=0;
	set<long long int> s;
	map<long long int,int> :: iterator it;
	map<long long int ,int> mp;
	int n,i,j,cnt=0;
	long long int a;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		scanf("%lld",&a);
		if(mp.find(a)==mp.end()) 
			mp.insert(make_pair(a,1));
		else
			mp[a]++;
	}
	while(1) {
		flag=0;
		for(it=mp.begin();it!=mp.end();it++) {
			if(it->second > 0) {
				flag=1;
				s.insert(it->first);
				it->second--;	
			}
		}
		if(!flag)
			break;
		else {
			cnt++;
			s.clear();
		}
	}
	printf("%d",cnt);
	return 0;
}