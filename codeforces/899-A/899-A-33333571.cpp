#include <bits/stdc++.h>
using namespace std;
int A[1000006];
int main() {
	int n,i,cnt=0,a,cnt_1=0,cnt_2=0;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		scanf("%d",&a);
		if(a==1)
			cnt_1++;
		else
			cnt_2++;
	}
	while(cnt_2!=0 && cnt_1!=0) {
		cnt++;
		cnt_1--;
		cnt_2--;
	}
	if(cnt_1!=0) 
		cnt=cnt+cnt_1/3;
	printf("%d",cnt);
	return 0;
}