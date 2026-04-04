//Program To Reverse a Number
#include<stdio.h>
int main(){
    int num, digit, rev = 0;
    printf("Enter Number to be reverse: ");
    //Taking Input from user
    scanf("%d",&num);
    printf("Number: %d\n",num);
    //Loop for Reverse a Number
    while(num!=0){
        digit = num%10;
        rev = rev *10 +digit;
        num = num/10;
    }
    //Print the Reverse Number
    printf("Reverse: %d",rev);
    return 0;
}
