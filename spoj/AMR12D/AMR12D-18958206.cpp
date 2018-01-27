# include <bits/stdc++.h>
using namespace std;
#define MAX 11
char S[MAX];
int is_palindrome (char S[],int len);
int main () {
	bool flag=0;
	int i,t,len;
	scanf("%d",&t);
	while(t--) {
		flag=0;
		scanf("%s",S);
		len=strlen(S);
		for(i=0;i<len/2;i++) {
			if(S[i]!=S[len-i-1]) {
				flag=1;
				break;
			}
		}
		if(!flag) 
			printf("\nYES");
		else
			printf("\nNO");
	}
	return 0;
}