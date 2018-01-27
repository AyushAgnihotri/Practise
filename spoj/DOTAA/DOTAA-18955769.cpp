# include <bits/stdc++.h>
using namespace std;
#define MAX 20007

int main () 
{
	bool flag=0;
	int i,t,n,m,D,j,H[MAX];
	scanf("%d",&t);
	while(t--) {
		flag=0;
		scanf("%d%d%d",&n,&m,&D);
		for(i=0;i<n;i++) 
			scanf("%d",&H[i]);
		sort(H,H+n);
		reverse(H,H+n);
		for(i=0,j=0;i<m;) {
			if(H[j]-D>0) {
				H[j]=H[j]-D;
				i++;
			}
			else { 
				j++;
				if(j>=n)
					H[0]=0;
			}
		}
		for(i=0;i<n;i++) {
			if(H[i]<=0) {
				flag=1;
				break;
			}
		}

		if(!flag)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}