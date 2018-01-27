#include <bits/stdc++.h>
using namespace std;
int main()
{
	int k,n,w,i,res;
	scanf("%d%d%d",&k,&n,&w);
	res=(((w*(w+1))/2)*k)-n;
	if(res<=0)
		res=0;
	printf("%d",res);
	return 0;
}