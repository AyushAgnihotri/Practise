#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,l_prev,t_prev,t,n,k,l;
	scanf("%d%d",&n,&k);
	scanf("%d%d",&l_prev,&t_prev);
	for(i=0;i<n;i++) {
		scanf("%d%d",&l,&t);
		if(l-l_prev<=0 && t==1) {
			k--;
		}
		else {

		}
		if(k<=0) {
			break;
		}
		l_prev=l;
		t_prev=t;		
	}
	printf("%d",l_prev);
	return 0;
}