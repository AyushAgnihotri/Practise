#include <iostream>
using namespace std;

int main() {
	int t,a,b,c,d,e;
	scanf("%d",&t);
	while(t--) {
		scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
		if(24-((a*c)+(b*d)+e+10)>0){
			printf("Khushi\n");
		}
		else 
			printf("Hotash\n");
	}
	return 0;
}