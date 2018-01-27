#include <bits/stdc++.h>
using namespace std;
vector<int> A,Q;
set<int> v;
set<int> :: iterator it;
int main()
{
	int n,x,a,y,i;
	scanf("%d%d",&n,&x);
	for(i=0;i<n;i++) {
		scanf("%d",&a);
		A.push_back(a);
	}
	for(i=0;i<n;i++) {
		scanf("%d",&a);
		Q.push_back(a);
	}
	for (int i = 0; i < n; i++) {
		for (int y = -x; y <= x; y++) {
			if ((i+y >= 0) && (i+y < n) && (A[i] == Q[i+y])) {
				v.insert(i+1);
			}
		}
}
	for(it=v.begin();it!=v.end();it++) {
		printf("%d ",*it);
	}
	v.clear();
	return 0;
}