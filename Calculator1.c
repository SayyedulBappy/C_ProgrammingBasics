#include <stdio.h>
#include<conio.h>

int main()
{   char C;
    float a,b,c,d,e,k,l,m,n,o,sum,sub,prod,div,pow=1,B,E;
   printf(" Addition\n Subtraction\n Multiplication\n Division\n Power\n Quit\n ");
   while(C!='A'&&C!='S'&&C!='M'&&C!='D'&&C!='P'&&C!='Q')
   {printf("\nEnter first letter of operation: ");
    C=getche();}
    while(C!='Q')
    {if(C=='A')
   {    printf("\nEnter 5 inputs:");
        scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
        sum=a+b+c+d+e;
        printf("The sum is:%f",sum);
        printf("\nEnter first letter of operation: ");
        C=getche();
        }


   if(C=='S')
   {    printf("\nEnter 5 inputs:");
        scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
        sub=a-b-c-d-e;
        printf("The difference is:%f",sub);
        printf("\nEnter first letter of operation: ");
        C=getche();
        }


   if(C=='M')
   {    printf("\nEnter 5 inputs:");
        scanf("%f%f%f%f%f",&k,&l,&m,&n,&o);
        prod=k*l*m*n*o;
        printf("The product is:%f",prod);
        printf("\nEnter first letter of operation: ");
        C=getche();
       }


   if(C=='D')
   {    printf("\nEnter 5 inputs:");
        scanf("%f%f",&k,&l);
        div=k/l;
        printf("The quotient is:%f",div);
        printf("\nEnter first letter of operation: ");
        C=getche();
        }


   if(C=='P')
   {    printf("\nEnter 2 inputs:");
        scanf("%f%f",&B,&E);
        while (E!=0)
    {
            pow*=B;
            --E;
    }

    printf(" result= %.3f",pow);

        printf("\nEnter first letter of operation: ");
        C=getche();
       }
    }
    return 0;
    }
