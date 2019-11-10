#include<stdio.h>
long int fact(int n);
int main()
{
    int n;
    printf("Enter an integer "); scanf("%d",&n);
    printf("The factorial of %d is %ld ",n,fact(n));
}
long int fact(int n)
{
   if(n>=1)
    return n*fact(n-1);
    else
        return 1;
}
