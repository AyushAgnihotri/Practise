#include <bits/stdc++.h>
using namespace std;
#define MAX 107
int A[MAX][MAX];
int main ()
{
	int h,w,m,t,i,j,mx=0,next;
	scanf("%d",&t);
	while(t--) {
		scanf("%d%d",&h,&w);
		mx=0;
		for(i=1;i<=h;i++) {
			for(j=1;j<=w;j++) {
				scanf("%d",&A[i][j]);
			}
			A[i][j]=0;
			for(j=1;j<=w;j++) {
				A[i][j] += max(A[i-1][j-1],max(A[i-1][j+1],A[i-1][j]));
			}
				
		}
		mx=A[h][1];
		for(i=2;i<=w;i++) {
			mx=max(mx,A[h][i]);
		}
		printf("%d\n",mx);
 	}
	return 0;
}