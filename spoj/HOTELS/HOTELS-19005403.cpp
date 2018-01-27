# include <bits/stdc++.h>
using namespace std;
#define MAX 300007
long int A[MAX];
int main () 
{
	long long int sum=0,max=0,m,j=0;
	int n,i;
	scanf("%d%lld",&n,&m);
	for(i=0;i<n;i++) {
		scanf("%ld",&A[i]);
	}
	for(i=0;i<n;i++) {
		sum=sum+A[i];
		while(sum>m) {
			sum=sum-A[j];
			j++;
			if(max<=sum && sum<=m){
				max=sum;
				break;
			}
		}
		if(max<=sum && sum<=m){
			max=sum;
		}
		
	}
	printf("%lld",max);
	return 0;
}