//Program to Check Armstrong number
#include<stdio.h>
int main(){
    int n,temp,sum=0,digit;
    printf("Enter Value of n: ");
    //Taking input from the user
    scanf("%d",&n);
    temp = n;
    while(temp!=0){
        digit = temp%10;
        sum = sum+digit*digit*digit;
        temp = temp/10;
    }
    //Condition check Number is Armstrong or Not
    if(sum == n){
        printf("Armstrong Number");
    }else{
        printf("Not Armstrong Number");
    }
    return 0;
