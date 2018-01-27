#include <bits/stdc++.h>
using namespace std;
int main()
{
	bool flag=0;
	long long int n,m,i,j,a,b,cnt=0;
	scanf("%lld%lld",&n,&m);
	pair<long long int,long long int> A[10003];
	memset(A,0,sizeof(A));
	for(i=0;i<n;i++) {
		scanf("%lld%lld",&a,&b);
		A[i]=make_pair(a,b);
	} 
	sort(A,A+n);
	if(A[0].first!=0)
		flag=1;
	if(!flag) {
		for(i=0;i<n;i++) {
			a=A[i].first;
			b=A[i].second;
			if(a<=cnt) {
				cnt=max(cnt,b);
			}
		}
		if(cnt<m)
			flag=1;
	}
	if(flag)
		printf("NO");
	else
		printf("YES");
	return 0;
}