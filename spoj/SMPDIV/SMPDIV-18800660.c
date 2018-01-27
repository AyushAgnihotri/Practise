#include <iostream>
using namespace std;
#define MAX 100005
int A[MAX];
int main() {
	int n,x,y,t,i;
	scanf("%d",&t);
	while(t--) {
		
		scanf("%d%d%d",&n,&x,&y);
		for(i=2;i<n;i++) {
			A[i]=i;
		}
		for(i=2;i<n;i++) {
			if(A[i]%x==0&&A[i]%y!=0){
				printf("%d ",A[i]);
			}
		}
	printf("\n");	
	}
	return 0;
}