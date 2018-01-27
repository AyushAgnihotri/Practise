#include <bits/stdc++.h>
using namespace std;

int main(){
	int t, i = 1, n;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		n -= ((n % 3 == 0) ? 15 : ((n % 3 == 1) ? 10 : 5));
		if(n <= 0 || n % 3 != 0)
			n = -1;
		printf("Case %d: %d\n", i++, n);
	}
	return 0;
}

