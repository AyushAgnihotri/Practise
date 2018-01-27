#include <iostream>
using namespace std;
#define MAX 1000
int A[MAX],B[MAX];
int main() {
	int n1,n2,i,j,k=0;
	bool flag=0;
	scanf("%d",&n1);
	for(i=1;i<=n1;i++) {
		scanf("%d",&A[i]);
	}
	scanf("%d",&n2);
	for(i=1;i<=n2;i++) {
		scanf("%d",&B[i]);
	}
	if(n1<n2) {
		for(i=1;i<=n1;i++) {
			if(A[i]==B[i]) {
				printf("%d ",i);
			}
		}
	}
	if(n2<=n1) {
		for(i=1;i<=n2;i++) {
			if(A[i]==B[i]) {
				printf("%d ",i);
			}
		}
	}
	return 0;
}