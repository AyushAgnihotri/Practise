#include <bits/stdc++.h>
using namespace std;

int main() {
	int A[10],i=0,sum=0;
	for(i=0;i<10;i++) {
		scanf("%d",&A[i]);
	}
	for(i=0;i<10;i++) {
		if(sum<100)
			sum=sum+A[i];
		else 
			break;
	}
	if(abs(100-sum)<=abs(100-sum+A[i-1]))
		printf("%d",sum);
	else
		printf("%d",sum-A[i-1]);
	return 0;
}