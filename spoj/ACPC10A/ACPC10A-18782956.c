    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
    	long long int t1,t2,t3,d,r;
    	scanf("%lld%lld%lld",&t1,&t2,&t3);
    	while(!(t1==0&&t2==0&&t3==0)) {
    		if((t2-t1)==(t3-t2)) {
    			d=t3-t2;
    			printf("AP %lld\n",t3+d);
    		}
    		else {
    			r=t3/t2;
    			printf("GP %lld\n",t3*r);
    		}
    	scanf("%lld%lld%lld",&t1,&t2,&t3);
    	}
    	return 0;
    } 