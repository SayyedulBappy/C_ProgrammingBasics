#include<stdio.h>
int main(){
    char text[10][80];
    int i;
    for(i=0;i<13;i++){
        printf("%d: ",i+1);
        gets(text[i]);
    }
    do{
        printf("Enter number of string(1-13): ");
        scanf("%d",&i);
        i--;
        if(i>=0&&i<13)printf("%s\n",text[i]);
    }   while(i>=0);
    return 0;
}
