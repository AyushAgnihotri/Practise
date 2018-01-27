#include <bits/stdc++.h>
using namespace std;
int main()
{
	int res=0,d1,d2,d3;
	scanf("%d%d%d",&d1,&d2,&d3);
	res=min(min(min(2*(d1+d2),d1+d3+d2),2*(d1+d3)),2*(d2+d3));	
	printf("%d",res);
	return 0;
}