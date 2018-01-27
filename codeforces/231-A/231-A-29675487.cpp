#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,sum,cnt=0;
	scanf("%d",&n);
	while(n--) {
		sum=0;
		for(int i=0;i<3;i++) {
			scanf("%d",&a);
			sum=sum+a;
		}
		if(sum>1) 
			cnt++;
	}
	printf("%d",cnt);
	return 0;
}