#include <stdio.h>
int main()
    {   int a[10], odd[10], even[10],i,j = 0,k = 0,n;
        printf("Enter the size of array: ");
        scanf("%d", &n);

        printf("Enter the elements of the array ");
        for (i = 0; i < n; i++)
        {scanf("%d", &a[i]);}
for (i = 0; i < n; i++){
        if (a[i]%2==0){
            even[j]=a[i];
            j++;}
        else{
            odd[k]=a[i];
            k++;}}
        printf("The elements of even are ");
        for (i = 0; i < j; i++)
        {printf("%d ", even[i]);}
        printf("\nThe elements of odd are ");
        for (i = 0; i < k; i++)
        {printf("%d ", odd[i]);}
        }
