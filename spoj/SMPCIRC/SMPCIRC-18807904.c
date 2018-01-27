#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,x1,x2,y1,y2,r1,r2;
	long long int s1,s2;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d%d%d%d%d",&x1,&y1,&r1,&x2,&y2,&r2);
		s2=(r1-r2)*(r1-r2);
		s1=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
		if(s1-s2<0)
			printf("I\n");
		else if(s1-s2==0)
			printf("E\n");
		else
			printf("O\n");
	}
	return 0;
}
