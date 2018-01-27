#include <iostream>
using namespace std;

int main() {
	int a,b,sum=0,i;
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++) {
		sum=sum+i*i;
	}
	printf("%d",sum);
	return 0;
}