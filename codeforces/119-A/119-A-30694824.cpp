#include <bits/stdc++.h>
using namespace std;
int main()
{
	int hcf,a,b,n,player=0;
	scanf("%d%d%d",&a,&b,&n);
	while(1) {
		if(!player%2) {
			hcf = __gcd(a,n);
			n= n - hcf;
			player = 1;
		}
		else {
			hcf= __gcd(b,n);
			n = n - hcf;
			player = 0;
		}
		if(n<=0)
			break;
		
	}
	if(player == 0)
		player = 1;
	else
		player = 0;
	printf("%d",player);
	return 0;
}