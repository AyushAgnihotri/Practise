#include <cstdio>
using namespace std;
int main () 
{
	unsigned long long int n;
	int t;
	scanf("%d",&t);
	while(t--) {
		scanf("%llu",&n);
		n%3==0?printf("Ragini\n"):printf("Hemlata\n");
	}
	return 0;
}
