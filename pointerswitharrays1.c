#include<stdio.h>
int main(){
int a[10]={10,20,30,40,50,60,70,80,90,100};
int *p;
p=&a[0];
printf("%d %d %d %d %d %d %d %d %d %d \n",*p,*(p+1),*(p+2),*(p+3),*(p+4),*(p+5),*(p+6),*(p+7),*(p+8),*(p+9));
printf("%d %d %d %d %d %d %d %d %d %d ",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
return 0;
}
