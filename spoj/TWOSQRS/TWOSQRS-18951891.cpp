# include <bits/stdc++.h>
using namespace std;
# define MAX 10000007
long long int A[MAX],B[MAX];
int main () 
{
	bool flag=0;
	int t;
	long long int i,num;
	for(i=0;i<MAX;i++) {
		A[i]=i*i;
		B[i]=A[i];
	}
	scanf("%d",&t);
	while(t--) {
		flag=0;
		scanf("%lld",&num);
		for(i=0;i*i<num;i++) {
			flag=binary_search(B,B+MAX,num-A[i]);
			if(flag) {
				printf("Yes\n");
				break;
			}
		}
		if(flag==0) {
			printf("No\n");
		}

	}
	return 0;
}