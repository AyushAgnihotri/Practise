#include <bits/stdc++.h>
#define MAX 20
using namespace std;
int main () 
{
	int i,a,d,A[MAX],B[MAX]; 
	bool flag=0;
	while(1) {
		flag=0;
		scanf("%d%d",&a,&d);
		if(a==0||d==0)
			break;
		for(i=0;i<a;i++) 
			scanf("%d",&A[i]);
		for(i=0;i<d;i++) 
			scanf("%d",&B[i]);
		sort(A,A+a);
		sort(B,B+d);
		if(A[0]<B[1])
			flag=1;
		if(flag)
			printf("Y\n");
		else
			printf("N\n");	

	}
	return 0;
}