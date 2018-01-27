#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, p, d, t;
	scanf("%d",&t);
	while(t--) {
		scanf("%d",&n);
		d = (int)(ceil((sqrt(8*n+1)-1)/2)+10e-8);
		p = d*(d+1)/2 - n;
		printf("TERM %d IS ",n);
		if(d&1) printf("%d/%d\n",1+p,d-p);
		else printf("%d/%d\n",d-p,1+p);
	}
	return 0;
}


