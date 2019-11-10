#include <stdio.h>


int main()
{   int sign;
    float a=0,b=0,c=0,d=0,e=0,k=1,l=1,m=1,n=1,o=1,sum,sub,prod,div;
   printf(" 1:Addition\n 2:Subtraction\n 3:Multiplication\n 4:Division\n");
   printf("Enter your choice:");
   scanf("%d",&sign);
   if(sign==1)
   {    printf("Enter 5 inputs:");
        scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
        sum=a+b+c+d+e;
        printf("The sum is:%f",sum);}

   if(sign==2)
   {    printf("Enter 5 inputs:");
        scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
        sub=a-b-c-d-e;
        printf("The difference is:%f",sub);}

   if(sign==3)
   {    printf("Enter 5 inputs:");
        scanf("%f%f%f%f%f",&k,&l,&m,&n,&o);
        prod=k*l*m*n*o;
        printf("The product is:%f",prod);}

   if(sign==4)
   {    printf("Enter 5 inputs:");
        scanf("%f%f%f%f%f",&k,&l,&m,&n,&o);
        div=k/l/m/n/o;
        printf("The quotient is:%f",div);}

    return 0;
    }
