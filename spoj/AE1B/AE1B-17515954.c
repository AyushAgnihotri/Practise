#include <stdio.h>

void bubble_sort(long list[], long n);
int main(void) {
	int i,n,c=0,count=1,k,s;
	scanf("%d%d%d",&n,&k,&s);
	int A[n];
	for(i=0;i<n;i++) {
		scanf("%d",&A[i]);
	}
	bubble_sort(A,n);
	for(i=0;i<n;i++) {
		c=c+A[i];
		if(c<(k*s)) {
			count++;
		}
		else {
			printf("%d",count);
			break;}
	}
	
	return 0;
}

void bubble_sort(long list[], long n)
{
  long c, d, t;
 
  for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (list[d] < list[d+1])
      {
        /* Swapping */
 
        t         = list[d];
        list[d]   = list[d+1];
        list[d+1] = t;
      }
    }
  }
}