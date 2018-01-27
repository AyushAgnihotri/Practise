#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,a,res;
	for(i=1;i<=5;i++) {
		for(j=1;j<=5;j++) {
			scanf("%d",&a);
			if(a==1) 
				break;
		}
		if(a==1)
			break;
	}
	res=abs(i-3)+abs(j-3);
	printf("%d",res);
	return 0;
}