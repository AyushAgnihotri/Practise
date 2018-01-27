#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,l,c,h,w,i=0,j=0;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d%d%d",&l,&c,&h,&w);
		for(i=0;i<(h*l)+l+1;i++){
			for(j=0;j<(w*c)+c+1;j++){
				if(i%(h+1)==0)
					printf("*");
				else
					{
						if(j%(w+1)==0) {
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