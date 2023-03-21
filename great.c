#include <stdio.h>
int main(){
   int num1,num2,num3,max;
   printf("Enter Three Numbers:\n");
   scanf("%d %d %d",&num1 ,&num2,&num3);
   if(num1>num2 && num1>num3){
    printf("The Greatest Number is %d",num1);

   }
   else if (num2>num3){
    printf("The Greatest Number is %d",num2);

   }
   else {
    printf("The Greatest Number is %d",num3);
   }

return 0;

}