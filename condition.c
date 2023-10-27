#include <stdio.h>
int main(){
float firstNumber, secondNumber;
float num1,num2;
float sum;
printf("enter firstNumber\n");
scanf("%f", &firstNumber);

printf("enter secondNumber\n");
scanf("%f", &secondNumber);
sum = firstNumber + secondNumber;
printf(" The sum is %.1f\n" ,sum);

if(sum >10){

    printf("congs man!!!!! 10\n");
} else{
    printf("WHOOPS!!!the number is less than 10\n");


    // printf("**********\n");
    // printf("");
    // printf("");
    // printf("number to check");
    // 4%2 gives remeinder but 4/2 give exert
    // // scanf("%d", &numberToCheck)

}
return 0;

    
}