#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long t,i,len,a,a1,dig,dig1;
	scanf("%lld",&t);
	while(t--) {
		scanf("%lld",&a);
		if(abs(a)==0) {
			printf("1\n");
		}
		else {
			a1=abs(a);
			len=floor(log10(abs(a1)))+1;
			dig1=a1+pow(10,len-1);
			dig=dig1-a;
			printf("%lld\n",dig);
		}
	}
}