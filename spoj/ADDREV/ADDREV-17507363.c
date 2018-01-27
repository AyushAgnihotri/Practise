#include <stdio.h>
int reverse(int num);

int main(void) {
	int i,n,a,b,c;
	scanf("%d",&n);
	int A[n],B[n],C[n];
	for(i=0;i<n;i++){
		scanf("%d%d",&A[i],&C[i]);
	}
	for(i=0;i<n;i++){
		a=A[i];
		a= reverse(a);
		c=C[i];
		c= reverse(c);
		b = a+c;
		b = reverse(b);
		B[i] = b;
	}
	for(i=0;i<n;i++)
		printf("%d\n",B[i]);
	return 0;
}

int reverse(int num) 
{	int new_num=0,r;
	while(num != 0) {
		r = num%10;
		new_num = (new_num*10) + r;
		num = num/10;
	}
	return new_num;
}