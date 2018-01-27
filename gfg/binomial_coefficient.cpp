#include <bits/stdc++.h>
using namespace std;

long long int C[1007][1007];

long long int bin_coeff(int n,int k)
{
	C[n][0]=1;
	C[n][n]=1;
	for(i=0;i<=n;i++) {
		for(j=0;j<=min(i,k);j++) {
			if(j==0 || i==j) {
				C[i][j] 1;
			}
		}
	}
}

int main()
{
	int n,k;
	memset(C,0,sizeof(C));
	while(scanf("%d%d",&n,&k) && (char)n!=EOF) {
		printf("%lld",bin_coeff(n,k));
	}
	return 0;
}