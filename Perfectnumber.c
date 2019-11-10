#include<stdio.h>
int main(){
    int n,rem,result=0,i;

    printf("Enter a number: ");scanf("%d",&n);
    for(i=1;i<=(n-1);i++)
    {
        rem=n%i;
        if(rem==0)
        {
            result=result+i;
        }
    }
    if(result==n)
        printf("Number is perfect number");
    else
        printf("Number is not perfect number");
}
