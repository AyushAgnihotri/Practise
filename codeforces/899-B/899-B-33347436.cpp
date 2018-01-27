#include <bits/stdc++.h>
using namespace std;
int A[26],yr[48];
int main() {
	bool flag=0,ans=0;
	int n,i,j,k;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		scanf("%d",&A[i]);
	}
	yr[0]=31;
	yr[1]=28;
	yr[2]=31;
	yr[3]=30;
	yr[4]=31;
	yr[5]=30;
	yr[6]=31;
	yr[7]=31;
	yr[8]=30;
	yr[9]=31;
	yr[10]=30;
	yr[11]=31;
	for(i=0;i<12;i++) {
		yr[12+i]=yr[i];
		yr[24+i]=yr[i];
		yr[36+i]=yr[i];
	}
	yr[37]=29;
	for(i=0;i<48;i++) {
		ans=0;
		if(A[0]==yr[i]) {
			for(j=0;j<n;j++) {
				if(A[j]!=yr[(j+i)%48]) {
					ans=1;
					break;
				}
			}	
			if(ans==0) 
				break;
		}
		else ans=1;
	}
	if(ans)
		printf("NO");
	else
		printf("YES");
	return 0;
}