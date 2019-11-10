#include <stdio.h>


int main()
{
    int a,b,f=1;
    printf("Enter a number: ");scanf("%d",&a);
    for(b=a;b>=1;b--){
        f=f*b; }
        printf("the factorial is %d\n",f);

    return 0;
}
