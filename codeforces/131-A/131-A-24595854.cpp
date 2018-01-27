#include <bits/stdc++.h>
#define MAX 105
char A[MAX];
int main() 
{
    int len,i;
    bool flag=0;
    scanf("%s",A);
    len=strlen(A);
    if(len==1){
    	flag=1;
    }
    for(i=1;i<len;i++) {
        if(A[i]>='A'&&A[i]<='Z')
            flag=1;
        else{flag=0;
        	break;}
    }
    if(flag) {
        for(i=0;i<len;i++) {
            if(A[i]>='a'&&A[i]<='z') 
                A[i]=A[i]-'a'+'A';
            else
                A[i]=A[i]-'A'+'a';
        }
    }
    printf("%s",A);
    return 0;
}