#include<bits/stdc++.h>
int n_facts(int);
int main()
{
    int i,n,n_rect=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        n_rect+=n_facts(i);
    printf("%d",n_rect);
    return 0;
}
int n_facts(int n)
{
    int i,len,n_factor=1;
    len=sqrt(n);
    for(i=2;i<=len;i++)
        if(n%i==0)
        n_factor++;
    return n_factor;
}