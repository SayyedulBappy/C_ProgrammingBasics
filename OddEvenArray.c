#include<stdio.h>
int main(){
int a[10],even[10],odd[10],i;
printf("Enter 10 numbers ");
for(i=0;i<10;i++){
    scanf("%d",&a[i]);
}
printf("Even number are: ");
for(i=0;i<10;i++){
    if(a[i]%2==0)printf("%d ",a[i]);}
printf("\nOdd number are: ");
for(i=0;i<10;i++){
    if(a[i]%2==1)printf("%d ",a[i]);}

}
