#include <stdio.h>

int main()
{
    int f,n;
    printf("Enter an integer to find its prime factors: ");
        scanf("%d",&n);
    printf("All prime factors of %d are: \n",n);
    for(f=2;f<n;f++)
    {   if(n%f==0)
        {printf("%d ",f);}
    }
    return 0;}
