#include<bits/stdc++.h>
int main()
{
    int n;
    int i,j,c,count=1;;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    c=A[0];
    for(i=0;i<n;i++){
        if(A[i]!=c) {
            c=A[i];
            count++;
        }
    }
    printf("%d",count);
    return 0;
}