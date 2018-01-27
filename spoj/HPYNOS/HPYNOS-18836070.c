#include <bits/stdc++.h>
int main()
{
	unsigned long long N,sum=0,temp,count=0;
	int rem;
	scanf("%llu",&N);
	temp=N;
	while(sum!=1 && sum!=2 && sum!=3 && sum!=4 && sum!=5 && sum!= 6 && sum!=8 && sum!=9)
	{
		sum=0;
		while(temp!=0)
		{
			rem=temp%10;
			sum=sum+(rem*rem);
			temp=temp/10;
		}
		temp=sum;
		count++;
	}
	if(sum==1)
		printf("%llu",count);
	else
		printf("-1");
	return 0;
}