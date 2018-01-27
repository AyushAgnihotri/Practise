#include <bits/stdc++.h>
using namespace std;
int main() {
	int t,m,n,ci,cj,i,j;
	scanf("%d",&t);
	while(t--) {
		scanf("%d%d%d%d",&m,&n,&ci,&cj);
		for(i=1;i<=m;i++){
			for(j=1;j<=n;j++) {
				if(j==cj||i==ci)
					printf("*");
				else
					printf(".");
			}
			printf("\n");
		}	printf("\n");
	}
	return 0;
}