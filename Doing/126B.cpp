#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,sz,mn,t;
	string s,s1,s2;
	scanf("%d",&t);
	while(t--) {
		s.clear();
		cin>>s;
		s1=s+s;
		n=s.length();
		for(i=0;i<n;i++) {
				s2.clear();
				s2.assign(s1.begin()+i,s1.begin()+i+n);
				if(s2<s) {
					s.clear();
					s=s2;
					mn=i;
				}
		}
		cout<<mn+1<<endl;
	}
	return 0;
}