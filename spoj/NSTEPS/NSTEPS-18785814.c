#include <iostream>
using namespace std;

int main() {
	int a,b,t;
	scanf("%d",&t);
	while(t--) {
		scanf("%d%d",&a,&b);
		if(b>a||b<(a-2)||b==a-1){
			printf("No Number\n");
			continue;
		}
		if((a%2!=0)&&(b%2)!=0){
			printf("%d\n",a+b-1);
			continue;
		}
		printf("%d\n",a+b);
	}
	return 0;
}