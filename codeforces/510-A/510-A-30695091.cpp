#include <bits/stdc++.h>
using namespace std;
int main()
{
	bool flag=0,hochuka=0;
	int n,m,i,j;
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++) {
		for(j=1;j<=m;j++) {
			if( i%2 == 1 )
				printf("#");
			else if(flag==1 && j==1 && hochuka==0) {
					printf("#");
					flag=0;
					hochuka=1;
				}
			else if(flag==0 && j==m && hochuka==0) {
					printf("#");
					flag=1;
				}
			else
				printf(".");
		}
		hochuka = 0;
		printf("\n");
	}
	return 0;
}