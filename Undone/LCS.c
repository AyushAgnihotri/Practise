#include <stdio.h>
#define MAX 10000
int LCS(char S1[],char S2[],int n1,int n2);
int main()
{
	int n1,n2,i,res=0;
	char S1[MAX],S2[MAX];
	scanf("%d%d",&n1,&n2);
	scanf("%s",S1);
	scanf("%s",S2);
	res = LCS(S1,S2,n1,n2);
	printf("%d",res);

	return 0;

}

int LCS(char S1[],char S2[],int n1,int n2) 
{
	int lcs[n1+1][n2+1],i,j;
	for(i=0;i<=n1;i++)
		lcs[i][0] = 0;
	for(j=0;j<=n2;j++)
		lcs[0][j] = 0;
	for(i=1;i<=n1;i++) {
		for(j=1;j<=n2;j++) {
			if(S1[i] == S2[j]) {
				lcs[i][j]=lcs[i-1][j-1]+1;
			}
			else
				lcs[i][j]=(lcs[i-1][j]>lcs[i][j-1])?lcs[i-1][j]:lcs[i][j-1];
		}
	}
	return lcs[n1][n2];
}
