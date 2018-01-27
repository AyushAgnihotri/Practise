#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	map<string,int> mp;
	string S;
	scanf("%d",&n);
	while(n--) {
		cin>> S;
		if(mp.find(S)==mp.end()) {
			cout<<"OK"<<endl;
			mp.insert(make_pair(S,1));
		}
		else {
			cout<<S<<mp[S]<<endl;
			mp[S]++;
		}
	}
	return 0;
}