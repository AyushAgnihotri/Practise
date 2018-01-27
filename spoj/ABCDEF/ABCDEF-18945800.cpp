#include <bits/stdc++.h>
using namespace std;
#define MAX 10000007
long long int A[MAX],B[MAX],S[MAX];
int main ()
 {
 	int n,i,j,k;
 	std::pair<long long int*, long long int*> bound; 
 	long long int *lo,*u,*low,*up,l=0,len,count2=0,count1=0,res=0;
 	scanf("%d",&n);
 	for(i=0;i<n;i++) {
 		scanf("%lld",&S[i]);
 	}
 	for(i=0;i<n;i++) {
 		for(j=0;j<n;j++) {
 			for(k=0;k<n;k++) {
 				A[l]=(S[i]*S[j])+S[k];
 				if(S[i]!=0) {
 					B[l]=S[i]*(S[j]+S[k]);
 				}
 				else {
 					B[l]=INT_MAX;
 				}
 				l++;
 			}
 		}
 	}
 	len=l;
 	sort(A,A+len);
 	sort(B,B+len);
 	for(l=0;l<len;l++) {
 			count2=0;count1=0;
 			if(binary_search(B,B+len,A[l])){
 				bound=std::equal_range(A,A+len,A[l]);
 				count1=bound.second-bound.first;
 				if(count1>1)
 					l=l+count1-1;
 				bound=std::equal_range(B,B+len,A[l]);
 				count2=bound.second-bound.first;
 				res=res+ count2*count1;
 				}
 	}
 	printf("%lld",res);
 	return 0;
 }