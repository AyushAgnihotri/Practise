#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,l,c,i=0,j=0;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&l,&c);
		for(i=0;i<l;i++){
			for(j=0;j<c;j++){
				if(i==0||i==l-1)
					printf("*");
				else
					{
						if(j==0||j==c-1) {
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