#include <bits/stdc++.h>
#include <deque>
#define MAX 1000007
using namespace std;
deque <int> dq;
deque <int> :: iterator it;

void printKMax(int arr[], int n, int k){
    int i,maxi;
    dq.clear();
    for(i=0;i<n;i++) {
        maxi=-999999;
        if(i<k-1) {
            dq.push_back(arr[i]);
        }
        else {
             dq.push_back(arr[i]);
            maxi=*max_element(dq.begin(),dq.begin()+dq.size());
            printf("%d ",maxi);
            dq.pop_front();
        }
    }
    printf("\n");
}
int main(){
   int t,i,n,k,arr[MAX];
   scanf("%d",&t);
   while(t--) {
       scanf("%d%d",&n,&k);
       for(i=0;i<n;i++) {
            scanf("%d",&arr[i]); 
       }
       printKMax(arr, n, k);
     }
     return 0;
}
