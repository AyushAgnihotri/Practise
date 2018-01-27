#include <bits/stdc++.h>
using namespace std;
int main()
{	
	bool flag;
	int n,x,i,j;
	scanf("%d",&n);
	while(n--) {
		flag=0;
		scanf("%d",&x);
		for(i=0;i<=100;i++) {
			for(j=0;j<=100;j++) {
				if(3*i+7*j==x) {
					flag=1;
					break;
				}
			}
			if(flag)
				break;
		}
		if(flag)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}