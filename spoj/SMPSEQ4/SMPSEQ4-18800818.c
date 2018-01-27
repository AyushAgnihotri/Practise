#include <iostream>
using namespace std;
#define MAX 1000
int A[MAX],B[MAX],C[MAX];
int main() {
	int n1,n2,i,j,k=0;
	bool flag=0;
	scanf("%d",&n1);
	for(i=0;i<n1;i++) {
		scanf("%d",&A[i]);
	}
	scanf("%d",&n2);
	for(i=0;i<n2;i++) {
		scanf("%d",&B[i]);
	}
	for(i=0;i<n1;i++) {
		for(j=0;j<n2;j++){
			if(A[i]==B[j]) {
				flag=1;
			}
		}
		if(flag) {
			C[k]=A[i];
			k++;
			flag=0;
		}
	}
	for(i=0;i<k;i++)
		printf("%d ",C[i]);
	return 0;
}