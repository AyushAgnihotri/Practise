#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,i=1;
	scanf("%d",&n);
	printf("I hate");
	while(i<n) {
		if(i%2){
			printf(" that I love");i++;}
		else{
			printf(" that I hate");i++;}
	}
	printf(" it");
	return 0;
}
