    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    inline void si(int* x)
    {
    	register char c = getchar_unlocked();
    	*x = 0;
    	int neg = 0;
    	for(; ((c<48 || c>57) && c != '-');c = getchar_unlocked());
    	if(c=='-') {
            neg = 1;
            c = getchar_unlocked();
        }
    	for(; (c>47)&&(c<58);c = getchar_unlocked())
    		*x = (int)((((*x)<<1) + ((*x)<<3)) + c - 48);
        if(neg)
            *x = -*x;
    }
    int deg[105];
    int main()
    {
        int t,n,k,i,s,d,m,odd,mini;
        si(&t);
        while(t--)
        {
            for(i=0;i<=100;i++)
                deg[i]=0;
            si(&n);
            si(&k);
            for(i=0;i<k;i++)
            {
                si(&s);
                si(&d);
                si(&m);
                deg[s]+=m;
                deg[d]+=m;
            }
            for(i=n,odd=0;i>=1;i--)
                if(deg[i]%2)
            {
                odd++;
                mini=i;
            }
            if(odd>2)
                printf("NO\n");
            else if(odd==2)
                printf("YES %d\n",mini);
            else
                printf("YES 1\n");
        }
        return 0;
    }
     