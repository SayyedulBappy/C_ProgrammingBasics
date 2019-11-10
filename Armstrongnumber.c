  #include<stdio.h>
  #include<math.h>
  int main()
  {
      int n,num1,num2,d=0,result=0,rem;
      printf("Enter number = ");scanf("%d",&n);
      num1=n;num2=n;
      while(n!=0){
        n=n/10;
        d++;}
        while(num1!=0){
            rem=num1%10;
            result=result+ pow(rem,d);
            num1=num1/10;}
        if(result==num2)
            printf("%d is an armstrong number",num2);
        else
            printf("%d is not an armstrong number",num2);
  }
