#include <bits/stdc++.h>
using namespace std;
void dream(int cnt)
{
	cnt++;
	if(cnt==12)
		return ;
	printf("dream\n");
	dream(cnt);
}

int main()
{
	dream(0);
	return 0;
}