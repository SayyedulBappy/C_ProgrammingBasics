#include<stdio.h>
int main(){
int i,k,*j;
scanf("%d",&i);
j=&i;
printf("value of i: %d\n",i);
printf("value of j: %x\n",j);
printf("value of j using i: %x\n",&i);
printf("value of i using j: %d\n",*j);
scanf("%d",&k);
j=&k;
printf("value of i: %d\n",k);
printf("value of k: %x\n",j);
printf("value of k using i: %x\n",&k);
printf("value of i using k: %d\n",*j);
return 0;
}
