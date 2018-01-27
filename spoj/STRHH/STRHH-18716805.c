#include <bits/stdc++.h>
using namespace std;
#define MAX 209
char A[MAX];
int main() {
	int t, k, i;
	scanf("%d",&t);
	while(t--) {
		scanf("%s",A);
		k=strlen(A);
		for(i=0;i<k/2;i++) { 
			printf("%c",A[i]);
			i++;
		}
	printf("\n");
	}
	return 0;
}