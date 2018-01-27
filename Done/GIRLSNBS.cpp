#include <bits/stdc++.h>
using namespace std;
int main () 
{
	int B=0,G=0,count=0;
	int empty,need;
	scanf("%d%d",&G,&B);
	while(B!=-1 && G!=-1) {
		count=0;
		empty=min(B,G)+1;
		need=max(B,G);
		while(need>0) {
			need=need-empty;
			count++;
		}
		printf("%d\n",count);
		scanf("%d%d",&G,&B);	
	}

	return 0;
}



