#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,x,i,j,curr;
	scanf("%d%d%d",&n,&k,&x);
	curr=(x+x%k)%n+1;
	while(abs(curr-x)<=k) {
		curr=(curr+curr%k)%n+1;
	}
	printf("%d",curr);
	return 0;
}