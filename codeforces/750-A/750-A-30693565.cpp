#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	bool flag=0;
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++) {
		if(5*((i*(i+1))/2) > 240-k) {
			printf("%d",i-1);
			flag=1;
			break;
		}
	}
	if(!flag)
		printf("%d",n); 
	return 0;
}