#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
	int n,t,i;
	string s;
	scanf("%d",&t); 
	while(t--) {
		map<string,int>mp;
		map<string,int>::iterator it; 
		scanf("%d",&n);
		cin.ignore();
		for(i=0;i<n;i++) { 
			getline(cin,s); 
			mp[s]++;
		} 
		for(it=mp.begin();it!=mp.end();it++) {
			cout<<(*it).first<<' '<<(*it).second<<endl;
		}
		cout<<endl; 
	}
 	return 0;
 }