#include <bits/stdc++.h>
using namespace std;

set<int> A[2510];
set<int> S;

int t,n,k,i,cnt=0;

void check1(int i,int j) 
{

	vector <int> v(5020);
	vector<int> :: iterator it;
	it=set_union (A[i].begin(),A[i].end(),A[j].begin(),A[j].end(),v.begin());
	v.resize(it-v.begin());
	for(it=v.begin();it!=v.end();it++) {
		S.insert(*it);
	}
	v.clear();
}

int main ()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int p,a,len;
	cin>> t;
	while(t--) {
		cnt=0;
		
		cin >> n >> k;
		for(i=1;i<=n;i++) {
			cin >> len;
			for(p=0;p<len;p++) {
				cin>>a;
				A[i].insert(a);
			}
			if(i>1) {
				S.clear();
				check1(i,i-1);
				if(S.size()==k && !S.empty()) {
					cnt++;
				}
			}
		}
		for(i=1;i<n-1;i++) {
			for(int j=i+2;j<=n;j++) {
				S.clear();
				if(A[i].size()+A[j].size()>=k && A[i].size()<=k && A[j].size()<=k && !A[i].empty() && !A[j].empty()) {
					check1(i,j);	
				 	if(S.size()==k && !S.empty()) {
						cnt++;
					}
				}				
			}
			A[i].clear();
		}
		A[n].clear();
		printf("%d\n",cnt);
		S.clear();
	}
	return 0;
}