# include <bits/stdc++.h>
using namespace std;
#define MAX 1000007
int main ()
{
	int len;
	char a;
	char A[MAX];
	scanf("%s",A);
	len=strlen(A);
	a=A[len-1];
	if(a=='0')
		printf("2\n");
	else
		printf("1\n%c\n",a);
}