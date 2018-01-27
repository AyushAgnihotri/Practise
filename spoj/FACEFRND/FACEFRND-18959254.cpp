# include <bits/stdc++.h>
using namespace std;
# define MAX 10000
int A[MAX],B[MAX];
int main () 
{
	pair <int*,int*> bounds;
	int n,m=0,mprev=0,mprevi=0,i,j,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		scanf("%d",&B[i]);
		mprevi=mprevi+m;
		scanf("%d",&m);
		mprev=mprev+m;
		for(j=mprevi;j<mprev;j++) {
			scanf("%d",&A[j]);
		}
	}
	for(i=0;i<n;i++) {
		for(j=0;j<mprev;j++)
			if(B[i]==A[j])
				A[j]=0;
	}
	sort(A,A+mprev);
	for(i=0;i<mprev;) {
		if(A[i]!=0) {
			bounds=equal_range(A,A+mprev,A[i]);
			j=bounds.second-bounds.first;
			count++;
			i=i+j;
		}
		else
			i++;
	}
	printf("%d",count);
	return 0;
}