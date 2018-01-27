#include <bits/stdc++.h>
using namespace std;
int main() {
long long int num=1,i,index;int t,n,ld;scanf("%lld",&t);while(t--) {scanf("%d %lld",&n,&index);ld=n%10;num=ld;if(index==0)printf("1\n");else if(index%4!=0){index=index%4;num=pow(num,index);num=num%10;printf("%lld\n",num);}else if(index%4==0){index=4;num=pow(num,index);num=num%10;printf("%lld\n",num);}}return 0;}  