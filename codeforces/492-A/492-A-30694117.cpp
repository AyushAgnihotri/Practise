#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a=0,i;
	scanf("%d",&n);
	for(i=1;i<=100004;i++) {
		a=a + ((i*(i+1))/2);
		if(a > n) {
			printf("%d",i-1);
			break;
		}
	}
	return 0;
}