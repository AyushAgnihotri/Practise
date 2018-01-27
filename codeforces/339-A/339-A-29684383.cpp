#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v;
	vector<int> :: iterator it;
	char a;
	while(scanf("%c",&a)!=EOF) {
		if(a!='+') 
			v.push_back(a-'0');
	}
	v.pop_back();
	sort(v.begin(),v.end());
	it=v.begin();
	printf("%d",*it);
	for(it=v.begin()+1;it!=v.end();it++) 
		printf("+%d",*it);
	return 0;
}