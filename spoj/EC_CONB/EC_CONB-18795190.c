#include <stdio.h>
#define MAX 1000007
long int A[MAX],n,c;
long int rotateBinary(long int number){
		long int res = 0;
		while(number>0){
			res=res<<1; 		
			res = res|(number & 1); 			
			number=number>>1;
		}
		return res;
}
int main() {
	scanf("%ld",&n);
	int i;
	for(i=0;i<n;i++) {
		scanf("%ld",&A[i]);
	}
	for(i=0;i<n;i++) {
		if(A[i]%2==0) {
			c=A[i];
			A[i]=rotateBinary(c);
		} 
	}
	for(i=0;i<n;i++) {
		printf("%ld\n",A[i]);
	}
	return 0;
}