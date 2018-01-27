# include <bits/stdc++.h>
using namespace std;
long long int gcd(long long int a,long long int b);
long long int lcm(long long int a,long long int b);
int main() 
{
	long long int a,b,t,LCM;
	scanf("%lld",&t);
	while(t--) {
		scanf("%lld%lld",&a,&b);
		LCM=lcm(a,b);
		printf("%lld %lld\n",LCM/a,LCM/b);

	}
	return 0;
} 

    long long int lcm(long long int x, long long int y)
    		{
    			if(x==0)
    				return y;
    			if(y==0)
    				return x;
    			long long int r=0, a, b;
    			a = max(x,y); // a is greater number
    			b = min(x,y); // b is smaller number
    			r = b;
    			while(a % b != 0)
    			{
    				r = a % b;
    				a = b;
    				b = r;
    			}
    			return (x*y)/r;
    } 