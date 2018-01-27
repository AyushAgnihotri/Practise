#include <bits/stdc++.h>
using namespace std;
vector<long long int> A;
pair< std::vector<long long int>::iterator,std::vector<long long int>::iterator> bound1, bound2;;
int main()
{
	bool flag;
	long long int t,m,i,j,a,n,cnt=0;;
	scanf("%lld",&t);
	while(t--) {
		scanf("%lld%lld",&n,&m);
		for(i=0;i<n;i++) {
			scanf("%lld",&a);
			A.push_back(a);
		}
		sort(A.begin(),A.end());
		cnt=0;
		for(i = 0; i < n; i++) {
			j = lower_bound(A.begin(), A.end(), m - A[i]) - A.begin();
			if(j != i && j != n && A[j] == m - A[i]) 
				cnt++;
		}
		printf("%lld\n", cnt >> 1);
		A.clear();
	}
	return 0;
}