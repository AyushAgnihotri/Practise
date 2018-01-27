#include <cstdio>
#include <math.h>

using namespace std;
int main()
{
	long long t,a;
	scanf("%lld",&t);
	while(t--) {
		scanf("%lld",&a);
		if(abs(a)==0) {
			printf("1\n");
		}
		else {
			a=abs(a)+pow(10,floor(log10(abs(a))))-a;
			printf("%lld\n",a);
		}
	}
}