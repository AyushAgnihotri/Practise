#include <bits/stdc++.h>
using namespace std;
char l1[10009],l2[10009],mul[20009];
int main() {
	int n,len1,len2,c=0,h,s=0,k=0;
	long int i,j;
	scanf("%d",&n);;
	while(n--) {
		scanf("%s%s",l1,l2);
		len1=strlen(l1);
		len2=strlen(l2);
		for(i=len1-1;i>=0;i--)
			{
				for(j=len2-1;j>=0;j--)
				{
					s=(l1[j]*l2[i])%10;
					mul[len1+len2-(j+k)]=s+c;
					c=(l1[j]*l2[i])/10;
				}
				mul(h+1)=c;
				c=0
				k++;
			}
		
		printf("%lld\n",mul);
	}

	return 0;
}