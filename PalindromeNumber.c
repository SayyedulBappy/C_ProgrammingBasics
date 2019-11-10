#include<stdio.h>
int main()
{
    int n,*p,temp,s=0,r;
     p=&n;
printf("Enter a number ");
scanf("%d",&*p);
temp=*p;
    while(*p!=0)
    {
        r=*p%10;
        s=s*10+r;
        *p=*p/10;
    }
    if(s==temp) printf("Number is Palindrome");
    else
        printf("Number is not Palindrome");
    return 0;
}
