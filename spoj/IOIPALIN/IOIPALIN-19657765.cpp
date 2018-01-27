#include <bits/stdc++.h>
using namespace std;
char A[50100], B[50100];
int C[2][50100];
int main () 
{
	int i,j,len1,len2,len,n;
	scanf("%d",&n);
	scanf("%s",A);
	for(i=0;i<n;i++) {
		B[i]=A[n-i-1];
	}
	len1=n;
	len2=n;
	for(i=1;i<=len1;i++) {
		for(j=1;j<=len2;j++) {
			if(A[i-1]==B[j-1]) 
				C[(i)%2][j]=C[(i+1)%2][j-1]+1;
			else
				C[(i)%2][j]=max(C[(i+1)%2][j],C[(i)%2][j-1]);
		}
	}
	len=max(C[0][len2],C[1][len2]);
	printf("%d\n",n-len);
	return 0;
}