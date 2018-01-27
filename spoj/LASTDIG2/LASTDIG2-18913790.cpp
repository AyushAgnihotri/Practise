#include <bits/stdc++.h>
using namespace std;
char A[1002],ch[1];
int main() {
	int t;
	long long int a,b,len;
	scanf("%d",&t);
	while(t--) {
		scanf("%s",A);
		scanf("%lld",&b);
		len=strlen(A);
		ch[0]=A[len-1];
		a=atoi(ch);
		if(b==0)
    		printf("1\n");
    	else if(b%4!=0) {
    		b=b%4;
    		a=pow(a,b);
    		a=a%10;
    		printf("%lld\n",a);
    	}
    	else if(b%4==0) {
    		b=4;
    		a=pow(a,b);
    		a=a%10;
    		printf("%lld\n",a);
		}

	}

	return 0;
}
  