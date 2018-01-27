#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x1,x2,x3;
	scanf("%d%d%d",&x1,&x2,&x3);
	printf("%d",min(min(abs(x1-x2)+abs(x1-x3),abs(x2-x1)+abs(x2-x3)),abs(x3-x1)+abs(x3-x2)));
	return 0;
}