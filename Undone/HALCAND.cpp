#include <bits/stdc++.h>
#define MAX 1008
using namespace std;
int A[MAX];
long long int result;
int main ()
{
	int t,i,n,k,mi=999999999,re,l,mini,count;
	scanf("%d",&t);
	for(int j=1;j<=t;j++) {
		scanf("%d%d",&n,&k);
		for(i=0;i<n;i++) {
			scanf("%d",&A[i]);
			mi=min(A[i],mi);
		}
		if(n<k) {
			printf("Case %d: %d",j,re);
		}
		if(n==k) {
			re=mi;
			printf("Case %d: %d\n",j,re);
		}
		if(n>k) {
			for(i=0;i<n;i++) {
				sort(A,A+n);
				reverse(A,A+n);
				for(l=0;l<k;l++) {
					mini=A[i+k-1];
					A[l]=A[l]-mini;
				}
				if(mini==0)
					break;
				count=count+mini;

			}
			printf("Case %d: %d\n",j,count);
		}
		

	}
	return 0;
}
