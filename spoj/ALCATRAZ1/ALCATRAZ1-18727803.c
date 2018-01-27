#include <bits/stdc++.h>
# define MAX 60
using namespace std;
int main()
{
	int t;
	char str[MAX];
	scanf("%d",&t);
	while(t--){
    scanf("%s",str);
	int len = strlen(str);
	long long int sum=0;
	for(int i=0;i<len;i++){
		sum+=(str[i]-'0');
	}
	printf("%lld\n",sum);
	}
} 