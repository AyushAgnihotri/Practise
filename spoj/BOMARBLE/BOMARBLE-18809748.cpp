#include <bits/stdc++.h>
using namespace std;

int main() {
int n,result;
while(1) {
	scanf("%d",&n);
	if(n==0)
	break;
	result=(3*(n+1)*(n+1)-n)/2;
	printf("%d\n",result);
}

	return 0;
}