#include <bits/stdc++.h>
using namespace std;
# define MAX 55
int A[MAX];
int main() 
{	bool flag=0;
	int num,i;
	scanf("%d",&num);
	for(i=0;i<num;i++) {
		scanf("%d",&A[i]);
	}
	for(i=0;i<num/2;i++) {
		if(A[i]!=A[num-1-i]) {
			flag=1;
			break;
		}
	}
	if(flag) 
		printf("No");
	else
		printf("Yes");
return 0;
}