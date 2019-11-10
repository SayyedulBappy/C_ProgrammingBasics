#include<stdio.h>
#include<string.h>
int main()
{
    char str1[30],str2[30],r;
    printf("Enter a message ");gets(str1);
    strcpy(str2,str1);
    strrev(str2);
    r=strcmp(str1,str2);
    if(r==0)
        printf("String is palindrome");
    else
        printf("String is not palindrome");
    return 0;
}
