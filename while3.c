#include<stdio.h>
int main()
{   float d,s;
    int a=0,b;
    printf("Enter how many times:");scanf("%d",&b);

while(a<b)
    {
        printf("enter distance and speed: ");
        scanf("%f %f",&d,&s);
        printf("driving time : %.3f\n",d/s);
        a++;
    }
    return 0;
}
