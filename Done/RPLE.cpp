#include <bits/stdc++.h>
using namespace std;
set<int> s1,s2;
set<int>:: iterator it;
int main ()
{
	bool flag=0;
	int a,b,i,j,n,r,t,cnt=0;
	scanf("%d",&t);
	while(t--) {
		cnt++;
		flag=0;
		s1.clear();
		s2.clear();
		scanf("%d%d",&n,&r);
		for(i=0;i<r;i++) {
			scanf("%d%d",&a,&b);
			s1.insert(a);
			s2.insert(b);
		}
		for(it=s1.begin();it!=s1.end();it++) {
			if(s2.find(*it)!=s2.end()) {
				flag=1;
				break;
			}
		}
		printf("Scenario #%d: ",cnt);
		if(flag) 
			printf("spied\n");
		else
			printf("spying\n");
	}
	return 0;
}