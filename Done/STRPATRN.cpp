#include<bits/stdc++.h>
int main() {
	int t;
	int n;
	int i, j;
	scanf("%d",&t);
	bool flag;
	while (t) {
		scanf("%d", &n);
		for (i = 0; i < n; ++i) {
			for (j = 0; j < (n - 1)/2-abs(((n + 1) / 2 - i));++j) {
				if(j%2)
					printf(".");
				else
					printf("*");
			}
			flag = false;
			if (n % 2 == 0 && i > (n + 1) / 2) {
				flag = true;
			}
			for (; j < (n + 1 ) / 2  + std::abs((n / 2 - i)); ++j) {
				if (n % 2 == 0 && (i - 1) == j && j == (n) / 2 - 1) {
					printf(".");
					continue;
				}
				if ( (flag ? i + 1 : i) % 2 == 0) {
					printf("*");
				} else {
					printf(".");
				}
			}
			for (; j < n; ++j) {
				if((j+n)%2)
					printf("*");
				else
					printf(".");
			}
			printf("\n");;
		}
		if (t> 0) {
			printf("\n");
		}
	}
	return 0;
}
