#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,sz,mn,t;
	string s,s1,s2;
	scanf("%d",&t);
	cin>>s;
	s1=s+s;
	n=s.length();
	for(i=0;i<n;i++) {
			s2.clear();
			s2.assign(s1.begin()+i,s1.begin()+i+n);
			if(lexicographical_compare(s2.begin(),s2.end(),s.begin(),s.end())) {
				s.clear();
				s=s2;
				mn=i;
			}
	}
	cout<<mn<<endl;
	return 0;
}