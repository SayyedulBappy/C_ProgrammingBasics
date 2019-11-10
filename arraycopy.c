#include<stdio.h>
int main(){
int a[4],b[4],i;
for(i=0;i<4;i++)
    scanf("%d",&a[i]);

for(i=0;i<4;i++){
 b[i]=a[i];
    printf("%d\n",b[i]);}
return 0;
}
