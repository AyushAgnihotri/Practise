#include <stdio.h>
#include <cmath>
using namespace std;
struct point {
	int x,y;
};
int cross_product(struct point A, struct point B)
{
	return (A.x *  B.y - B.x * A.y);
}
int area(struct point p[],int n)
{
	int area=0.0;
	for(int i=0;i<n;i++) {
		 area = area+cross_product(p[i%n],p[(i+1)%n]);
	}
	return abs(area) / 2.0;
}

int main()
{
	struct point p[100];
	int n;
	//printf("Enter the number of points : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++) {
		//printf("Enter the coordinates of point %c :\n",'A'+i);
		scanf("%d%d",&p[i].x,&p[i].y);
	}
	printf("%d",area(p,n));
}