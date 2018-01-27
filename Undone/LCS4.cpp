#include <bits/stdc++.h>
using namespace std;
int A[1000007],B[10],C[1000008][11];
int l1,l2,i,j;
void lcs()
{
  memset(C,0,sizeof(C));
  for(i=0;i<=l1;i++) {
    for(j=0;j<=l2;j++) {
      if(i==0 || j==0) {
        C[i][j]=0;
      }
      else {
            if(A[i-1]==B[j-1]) {
            C[i][j]=C[i-1][j-1]+1;
          }
          else {
            C[i][j]=max(C[i-1][j],C[i][j-1]);
          }
      }
    }
  }
  int index=C[l1][l2];
  if(index==0) {
    printf("0\n");
  }
  else {
    printf("%d ",index);
  vector<int> S(index);
  vector<int> :: iterator it;
  i = l1, j = l2;
   while (i > 0 && j > 0)
   {
      if (A[i-1] == B[j-1])
      {
          S[index-1] = A[i-1]; 
          i--; j--; index--;     
      }
      else if (C[i-1][j] > C[i][j-1])
           i--;
        else if(C[i-1][j] < C[i][j-1])
           j--;
         else if(C[i-1][j] == C[i][j-1])
         {
            if(A[i-1]<B[j-1])
              j--;
            else
              i--;
         }
     }

  for(it=S.begin();it!=S.end();it++) {
    printf("%d ",*it);
  }
  S.clear();
    printf("\n");
   }
}

int main ()
{
  scanf("%d",&l1);
  for(i=0;i<l1;i++) {
    scanf("%d",&A[i]);
  }
  int t;
  scanf("%d",&t);
  while(t--) {
    scanf("%d",&l2);
    for(i=0;i<l2;i++) {
      scanf("%d",&B[i]);
    }
    if(l2==0){
      printf("0\n");
    }
    else {
      lcs();
    memset(B,0,sizeof(B)); 
    } 
  }
  return 0;
}