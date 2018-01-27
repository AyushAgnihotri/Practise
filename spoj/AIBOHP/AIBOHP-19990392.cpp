#include <bits/stdc++.h>
using namespace std;
int main()
{
	string A,B;
	int t,len,i,j,lcs;
	scanf("%d",&t);
	while(t--) {
		cin>>A;
		B=A;
		reverse(B.begin(),B.end());
		len=A.length();
		int C[2][len+1];
		memset(C,0,sizeof(C));
		for(i=1;i<=len;i++) {
			for(j=1;j<=len;j++) {
				if(A[i-1]==B[j-1]) {
					C[i%2][j]=C[(i+1)%2][j-1]+1;
				}
				else {
					C[i%2][j]=max(C[(i+1)%2][j],C[i%2][j-1]);
				}
			}
		}
		lcs=max(C[0][len],C[1][len]);
		printf("%d\n",len-lcs);
		A.clear();
		B.clear();
	}
	return 0;
}