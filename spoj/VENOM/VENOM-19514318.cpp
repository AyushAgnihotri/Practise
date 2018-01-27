#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int t,n,H,A,P,tm,i=1;
	scanf("%d",&t);
	while(t--) {
		tm=1;
		i=1;
		scanf("%d%d%d",&H,&P,&A);
		while(H>0) {
			if(H-i*P > 0) {
				H=H-i*P;
				i++;
				tm++;}
			else
				break;
			H=H+A;
			tm++;
		}
		printf("%d\n",tm);
	}
}