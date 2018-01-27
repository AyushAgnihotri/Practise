#include <bits/stdc++.h>
using namespace std;
#define MAX 1000
int A[MAX],B[MAX];
int main() {
	int n1,n2,i,j,sum1=0,sum2=0;
	bool flag=0;
	scanf("%d",&n1);
	for(i=1;i<=n1;i++) {
		scanf("%d",&A[i]);
		sum1=sum1+A[i];
	}
	scanf("%d",&n2);
	for(i=1;i<=n2;i++) {
		scanf("%d",&B[i]);
		sum2=sum2+B[i];
	}
	if(sum1/n1>sum2/n2){
		for(i=1;i<=n1;i++) {
			printf("%d ",A[i]);
	}
	}
	else if(sum1/n1<=sum2/n2){
		for(i=1;i<=n2;i++) {
			printf("%d ",B[i]);
		}
	}
	return 0;
}
