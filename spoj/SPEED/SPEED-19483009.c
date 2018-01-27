#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b) {
	int hcf=a%b;
	while(hcf!=0) {
		a=b;
		b=hcf;
		hcf=a%b;
	}
	return b;
}
int main () 
{
	int t,a,b,res;
	scanf("%d",&t);
	while(t--) {
		scanf("%d%d",&a,&b);
		res=b-a;
		res=abs(res);
		a=abs(a);
		b=abs(b);
		res=res/gcd(a,b);
		printf("%d\n",res);
	}
	return 0;
}