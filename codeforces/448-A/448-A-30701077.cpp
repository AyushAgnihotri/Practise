#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,i,j;
	float cups=0,medals=0;
	for(i=0;i<=2;i++) { 
		scanf("%d",&a);
		cups+=a;
	}
	for(i=0;i<=2;i++) {
		scanf("%d",&a);
		medals+=a;
	}
	scanf("%d",&n);
	int ans=ceil(medals/10) + ceil(cups/5);
	if(n<ans)
		printf("NO");
	else
		printf("YES");
	return 0;
}