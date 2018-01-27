#include <bits/stdc++.h>
int main()
{
	bool flag;
	long long int n,b,i;
	while(1) {
		flag=0;
		scanf("%lld",&n);
		if(n==-1) 
			break;
		n--;
		for(i=0;i*i<=n;i++) {
			b=3*i*(i+1);
			if(b==n){
				flag=1;
				break;
			}
			else
				flag=0;
		} 
		if(flag) 
			printf("Y\n");
		else
			printf("N\n");
 	}
	return 0;
}