#include <stdio.h>
#include <stdlib.h>
#define MAX 1000
int knapsack(int W[],int V[],int w,int n);
int main () {
	int res=0,W[MAX],V[MAX];
	int w,n;
	scanf("%d%d",&w,&n);
	for(int i=0;i<n;i++) {
		scanf("%d%d",&V[i],&W[i]);		
	}
	res=knapsack(W,V,w,n);
	printf("%d",res);
	return 0;
}

int knapsack(int W[],int V[],int w,int n) {
	int arr[n][w+1];
	for(int i=0;i<n;i++) {
		for(int j=0;j<w+1;j++) {
			if(j==0) {
				arr[i][j]=0;
				continue;
			}
			if(i==0) {
				if(j<W[i])
					arr[i][j]=0;
				else 
					arr[i][j]=V[i];
				continue;
			}
			if(j>=W[i]){
				arr[i][j]=((V[i]+arr[i-1][j-W[i]])>arr[i-1][j])?(V[i]+arr[i-1][j-W[i]]):arr[i-1][j];
			}
			else
			{
				arr[i][j]=arr[i-1][j];
			}
		}
	}
	return arr[n-1][w];
}