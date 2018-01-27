#include<stdio.h>
int main(){char a;for(int i=1;~scanf("%c",&a);){if(a=='\n'){printf("%d\n",i);i=1;} if(a=='T'||a=='D'||a=='L'||a=='F')i*=2;}return 0;}
