#include <bits/stdc++.h>
using namespace std;
int main() {
	int t, l ,c,i,j,k=0;
	
	scanf("%d",&t);
	while(t--) {
		scanf("%d%d",&l,&c);
		k=0;
		for(i=0;i<l;i++) {
			for(j=0;j<c;j++) {
				if(k%2){
					printf(".");
					k++;}
				else {
					printf("*");
					k++;
				}
			}
			k=i+1;
			printf("\n");
		}
		printf("\n");
		
	}
	return 0;
}