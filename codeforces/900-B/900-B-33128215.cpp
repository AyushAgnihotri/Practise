#include <bits/stdc++.h>
using namespace std;
int main()
{	
	bool flag=0;
	int a,b,x,c,i,rem,res=1,dec=1;
	scanf("%d%d%d",&a,&b,&c);
	rem=a%b;
	while(1) {
		if(dec==10000005)
			break;
		a=rem*10;
		rem=a%b;
		if(a/b==c) {
			res=dec;
			flag=1;
			break;
		}
		else dec++;
	}
	if(!flag) {
		printf("-1");
	}
	else {
		printf("%d",res);
	}
	return 0;
}