#include <stdio.h>

int main(void) {
	int t,n,sum=0;
	scanf("%d",&t);
	while(t--) {
		scanf("%d",&n);
		if(n>0) {
			sum = sum + n;
		}
	}
	printf("%d",sum);
	return 0;
}