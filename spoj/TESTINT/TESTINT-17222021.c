#include <stdio.h>

int main(void) {
	int a,b,sum;
	scanf("%d",&a);
	scanf("%d",&b);
	if(a<=200 && b<=200) {
		sum = a+b;
		printf ("%d",sum);
	}

	return 0;
}