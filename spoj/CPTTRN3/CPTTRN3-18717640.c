#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,l,c,i=0,j=0;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&l,&c);
		for(i=0;i<(4*l)-l+1;i++){
			for(j=0;j<(4*c)-c+1;j++){
				if(i%3==0)
					printf("*");
				else
					{
						if(j%3==0) {
							printf("*");
						}
						else 
							printf(".");
					}
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}