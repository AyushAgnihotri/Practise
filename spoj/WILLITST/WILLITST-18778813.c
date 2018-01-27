#include <bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(long long int);
int main() {
	long long int num;
	bool flag=0;
	scanf("%lld",&num);
	flag=isPowerOfTwo( num);
	if(num<=1||flag==1)
		printf("TAK");
	else printf("NIE");
	return 0;
}
bool isPowerOfTwo(long long int x)
{
    return (x && !(x & (x - 1)));
}