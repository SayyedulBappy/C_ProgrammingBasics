#include <stdio.h>


int main()
{   int a,b,c;
    printf("Prime numbers between 10 and 100 are : \n");
    for(a=1;a<15;a++)
    {   c=0;
        for(b=2;b<=a/2;b++)
        {   if(a%b==0)
            c=1;
        }
        if(c==0) printf("%d-prime number\n",a);
    }
    return 0;
}
