#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a=0,b=0,c=0,x,y,z;
	scanf("%d",&n);
	while(n--) {
		scanf("%d%d%d",&x,&y,&z);
		a=a+x;
		b=b+y;
		c=c+z;
	}
	if(a==0&&b==0&&c==0) 
		printf("YES");
	else
		printf("NO");
	return 0; 
}