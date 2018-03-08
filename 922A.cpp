#include <bits/stdc++.h>
using namespace std;
int main()
{
	int copy,original,cnt_o,cnt_c;
	cin>>copy>>original;
	if(original==0 || abs(copy-original)%2==0 || copy<original-1) 
		printf("No");
	else
		if(original == 1 && copy!=0)
			printf("No");
		else
		printf("Yes");
	return 0;	
}