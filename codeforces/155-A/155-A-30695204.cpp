#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,cnt=0;
	int prev_min,prev_max,a;
	scanf("%d",&n);
	scanf("%d",&a);
	prev_max=a;
	prev_min=a;
	n--;
	while(n--) {
		scanf("%d",&a);
		if(a<prev_min ) {
			cnt++;
			prev_min = min(prev_min,a);
		}
		if(a>prev_max) {
			cnt++;
			prev_max = max(prev_max,a);
		}
	}
	printf("%d",cnt);
	return 0;
}