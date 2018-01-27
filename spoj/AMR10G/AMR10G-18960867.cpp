# include <bits/stdc++.h>
using namespace std;
#define MAX 20007
int main () 
{
	int t,n,k,i,nmean=0;
	long long int h[MAX];
	scanf("%d",&t);
	while(t--) {
		scanf("%d%d",&n,&k);
		for(i=0;i<n;i++) {
			scanf("%lld",&h[i]);
		}
		nmean=0;
		sort(h,h+n);
		k--;
		for(i=1;i<n-k;i++) {
			if((h[i+k]-h[i])<(h[nmean+k]-h[nmean])) {
				nmean=i;
			}
		}
		printf("%lld\n",h[nmean+k]-h[nmean]);
	}
	return 0;
}