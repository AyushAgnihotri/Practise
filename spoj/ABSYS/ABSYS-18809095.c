#include <bits/stdc++.h>
using namespace std;
char A[10],B[10],C[10];
int main() {
	int t,i,a,b,c;
	char f[6];
	scanf("%d",&t);
	while(t--) {
		scanf("%s%c%c%c%s%c%c%c%s",A,&f[0],&f[1],&f[2],B,&f[3],&f[4],&f[5],C);
		a=atoi(A);b=atoi(B);c=atoi(C);
		for(i=0;A[i]!='\0';i++) {
			if(A[i]=='m'){
				a=0;break;}
		}
		for(i=0;B[i]!='\0';i++) {
			if(B[i]=='m'){
				b=0;break;}
		}
		for(i=0;C[i]!='\0';i++) {
			if(C[i]=='m'){
				c=0;break;}
		}
		if(a==0)
			a=c-b;
		if(b==0)
			b=c-a;
		if(c==0)
			c=a+b;
		printf("%d + %d = %d\n",a,b,c);
	}
	return 0;
}