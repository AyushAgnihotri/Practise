# include <bits/stdc++.h>
#define MAX 2007
using namespace std;

int C[MAX][MAX];
char A[MAX],B[MAX];
int t,len1,len2,d;
//WAGNER_FISHER
int EditDistance()
{
	int i,j;
	for(i=0;i<=len1;i++)
		C[i][0]=i;
	for(j=0;j<=len2;j++)
		C[0][j]=j;
	for(i=1;i<=len1;i++) {
		for(j=1;j<=len2;j++) {
			if(A[i-1]==B[j-1])
				C[i][j]=C[i-1][j-1];
			else 
				C[i][j]=min(C[i-1][j]+1,min(C[i][j-1]+1,C[i-1][j-1]+1));
		}
	}
	return C[len1][len2];
}

int main () 
{
	scanf("%d",&t);
	while(t--) {
		cin>>A;
		cin>>B;
		len1=strlen(A);
		len2=strlen(B);
		d=EditDistance();
		printf("%d\n",d);
	}
	return 0;
}