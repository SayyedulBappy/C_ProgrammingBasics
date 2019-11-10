#include <stdio.h>
int main()
{   int g;
    float s;
    printf(" 1.Male\n 2.Female\n Choose Gender: ");
    scanf("%d",&g);
    if(g==1)
    {
    printf("enter salary: "); scanf("%f",&s);

    if(s<200000)printf("There is no tax\n");

    else if(s>=200000&&s<300000)printf("Income tax is 10 %% and the amount is:%f\n ",s*.1);
    else if(s>=300000&&s<400000)printf("Income tax is 15 %% and the amount is:%f\n ",s*.15);
    else if(s>=400000&&s<500000)printf("Income tax is 20 %% and the amount is:%f\n ",s*.2);
    else if(s>=500000&&s<600000)printf("Income tax is 30 %% and the amount is:%f\n ",s*.3);
    else if(s>=600000)printf("Income tax is 40 %% and the amount is:%f\n ",s*.4);
    }

    if(g==2)
    {
    printf("enter salary:\n"); scanf("%d",&s);

    if(s<250000)printf("There is no tax\n");

    else if(s>=250000&&s<350000)printf("Income tax is 10 %% and the amount is:%f\n ",s*.10);
    else if(s>=350000&&s<450000)printf("Income tax is 15 %% and the amount is:%f\n ",s*.15);
    else if(s>=450000&&s<550000)printf("Income tax is 20 %% and the amount is:%f\n ",s*.2);
    else if(s>=550000&&s<650000)printf("Income tax is 30 %% and the amount is:%f\n ",s*.3);
    else if(s>=650000)printf("Income tax is 40 %% and the amount is:%f\n ",s*.4);

    }
    return 0;
}
