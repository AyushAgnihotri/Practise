#include <bits/stdc++.h>
using namespace std;
#define MAX 10005
int A[MAX];
int main() {
	int i,n,mean,move,count;
	scanf("%d",&n);
	while(n!=-1) {
		mean=0;
		count=0;
		move=0;
		for(i=0;i<n;i++) {
			scanf("%d",&A[i]);
			mean=mean+A[i];
		}
		if(mean%n==0){
			mean=mean/n;
			for(i=0;i<n;i++) {
				if(A[i]<mean){
					count=count+(mean-A[i]);
				}
			}
			for(i=0;i<n;i++) {
				if(A[i]>mean){
					move=move + (A[i]-mean);
					}
			}
			if(count==move) {
				printf("%d\n",move);
			}
			else{
				printf("-1\n");
			}
		}
	else
		printf("-1\n");
	scanf("%d",&n);
	}
	return 0;
}