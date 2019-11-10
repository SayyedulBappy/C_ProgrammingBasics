#include<stdio.h>
int sum(void);
int main(){
    int s;
    s=sum();
    printf("sum: %d",s);
    return 0;
}
int sum(void)
{
    int a,b;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    return a+b;
}
