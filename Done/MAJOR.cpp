# include <bits/stdc++.h>
using namespace std;
#define MAX 1000007
int A[MAX];
int main () 
{
	pair <int*,int*> bounds;
	pair <int , int > num[MAX],ans;
	int i,t,n,max,maxi,j;
	scanf("%d",&t);
	while(t--) {
		scanf("%d",&n);
		for(i=0;i<n;i++) {
			scanf("%d", &A[i]);
		}
		sort(A,A+n);
		for(i=0,j=0;i<n;i+=bounds.second-bounds.first) {
			bounds=equal_range(A,A+n,A[i]);
			num[j].first=A[i];
			num[j].second=bounds.second-bounds.first;
			j++;			
		}
		max=0;
		for(i=0;i<j;i++) {
			if(max<num[i].second) {
				maxi=i;
				max=num[i].second;
			}
		}
		ans=num[maxi];
		if(max>n/2){
			printf("YES %d\n",ans.first);
		}
		else {
			printf("NO\n");
		}
			
	}
	return 0;
}