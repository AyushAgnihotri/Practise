#include <bits/stdc++.h>
using namespace std;
int main()
{	
	int n,i,j,x,k;
	int a[1000];
	memset(a,0,sizeof(a));
	vector <int> v[3];
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		for(j=0;j<6;j++) {
			scanf("%d",&x);
			v[i].push_back(x);
		}
	}
	for(i=0;i<n;i++) {
		for(j=0;j<6;j++) {
			a[v[i][j]]=1;
		}
	}
	if(n==2||n==3) {
		for(i=0;i<6;i++) {
			for(j=0;j<6;j++) {
				a[(v[0][i]*10)+v[1][j]]=1;
				a[(v[1][i]*10)+v[0][j]]=1;
				if(n==3) {
					a[(v[0][i]*10)+v[2][j]]=1;
					a[(v[2][i]*10)+v[0][j]]=1;
					a[(v[1][i]*10)+v[2][j]]=1;
					a[(v[2][i]*10)+v[1][j]]=1;
				}
			}
		}	
	}
	if(n==3) {
		for(i=0;i<6;i++) {
			for(j=0;j<6;j++) {
				for(k=0;k<6;k++) {
					a[(v[0][i]*100)+(v[1][j]*10)+v[2][k]];
					a[(v[1][i]*100)+(v[2][j]*10)+v[0][k]];
					a[(v[2][i]*100)+(v[0][j]*10)+v[1][k]];
				}
			}
		}
	}
	if(n==1) {
		for(i=1;i<=9;i++) {
			if(a[i]==0) {
				printf("%d",i-1);
				break;
			}
		}
	}
	if(n==2) {
		for(i=1;i<=99;i++) {
			if(a[i]==0) {
				printf("%d",i-1);
				break;
			}
		}
	}
	if(n==3) {
		for(i=1;i<=999;i++) {
			if(a[i]==0) {
				printf("%d",i-1);
				break;
			}
		}
	}
	return 0;
}