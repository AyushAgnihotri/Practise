#include <bits/stdc++.h>
using namespace std;

int main(){
	double pi = 4*atan(1.0);
	int x;
	while (scanf("%d",&x)&&x!=0){
		printf("%.2lf\n",(double)(x*x)/2/pi);
	}

}