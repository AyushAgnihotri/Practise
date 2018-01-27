#include <bits/stdc++.h>
using namespace std;
int main()
{	
	int t,x,y,cnt_l=0,cnt_r=0;
	bool flag=0;
	scanf("%d",&t);
	while(t--) {
		scanf("%d%d",&x,&y);
		if(x>0)
			cnt_r++;
		else
			cnt_l++;
	}
	if(cnt_r==0 || cnt_l==0||cnt_l==1 || cnt_r==1) {
		flag=1;
	}
	if(flag)
		printf("Yes");
	else
		printf("No");
	return 0;
}