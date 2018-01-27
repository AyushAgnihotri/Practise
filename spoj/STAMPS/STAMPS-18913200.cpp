#include <bits/stdc++.h>
#define MAX 1005
using namespace std;
int A[MAX];
int main() 
{
	int t,borrow,count=0,n,i,s=0;
	scanf("%d",&t);
	while(t--) {
		count=0,s++;
		scanf("%d%d",&borrow,&n);
		for(i=0;i<n;i++) {
			scanf("%d",&A[i]);
		}
		sort(A,A+n);
		reverse(A,A+n);
		printf("Scenario #%d:\n",s);
		for(i=0;i<n;i++) {
			borrow=borrow-A[i];
			count++;
			if(borrow <= 0) {
				printf("%d\n\n",count);
				break;
			}
			else if(count == n-1)
				printf("impossible\n\n");
		}
	}
	return 0;
}