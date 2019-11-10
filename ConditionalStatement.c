#include <stdio.h>
int main()
{
    float a,b,c ;

    printf("Enter three numbers:");
    scanf("%f %f %f",&a,&b,&c);

    if (a==b&&b==c)
        printf("All the numbers are equal" );

    else if (a==b)
        printf("a is equal to b");

    else if (a>b)

        printf("a is greater ");

    else if (b==c)
        printf("b is equal to c");

    else if( b>c)

        printf("b is greater ");

    else if(c==a)
        printf("c is equal to a");

    else
        printf("c is greater");

    return 0;
}
