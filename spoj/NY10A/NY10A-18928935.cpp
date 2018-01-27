#include <bits/stdc++.h>
using namespace std;
char A[40];
int main () 
{
	int i,p,l=1,a,b,c,d,e,f,g,h;
	scanf("%d",&p);
	while(p--) {
		scanf("%d",&l);
		a=b=c=d=e=f=g=h=0;
		scanf("%s",A);
		for(i=0;i<38;i++) {
			if(A[i]=='T') {
				if(A[i+1]=='T') {
					if(A[i+2]=='T') {
						a++;
					}
					else
						b++;
				}
				else {
					if(A[i+2]=='T') {
						c++;
					}
					else 
						d++;
				}
			}
			else {
				if(A[i+1]=='T') {
					if(A[i+2]=='T') {
						e++;
					}
					else
						f++;
				}
				else {
					if(A[i+2]=='T') {
						g++;
					}
					else 
						h++;
				}
			}
		}
		printf("%d %d %d %d %d %d %d %d %d\n",l,a,b,c,d,e,f,g,h);
	}
	return 0;
}