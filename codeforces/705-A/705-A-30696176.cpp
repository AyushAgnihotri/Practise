#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
		if(i%2) 
			printf("I hate ");
		else
			printf("I love ");
		if(i==n)
			printf("it ");
		else
			printf("that ");
	}
	return 0;
}