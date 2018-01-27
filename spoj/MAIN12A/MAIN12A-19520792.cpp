#include <bits/stdc++.h>
using namespace std;
#define MAX 10000007
int A[MAX];
int t,n,i,cnt=0,j=1,k=1,l=1;
int main ()
{	
	for(i=1;i<1000007;) {
		A[i]=k;
		j=A[l];
		l++;
		k++;
		while(j--) {
			i++;
			A[i]=k;
		}
	}

	scanf("%d",&t);
	while(t--) {
		cnt++;
		scanf("%d",&n);
		printf("Case #%d: %d\n",cnt,A[n]);
	}
	return 0;
}