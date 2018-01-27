#include <bits/stdc++.h>
using namespace std;
int A[26];
int main()
{
    int i,count=0;
	char S[1000000];
    scanf("%s",S);
    for(i=0;i<26;i++){
     A[i]=std::count(S,S+strlen(S),'a'+i);   
    }
    for(i=0;i<26;i++) 
        if(A[i]!=0)
            count++;
    if(count%2)
        printf("IGNORE HIM!");
    else
        printf("CHAT WITH HER!");
}