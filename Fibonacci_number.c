//Program to print nth terms of fibonacci series
#include<stdio.h>
//Function Prototype
int fib(int n);
int main(){
    int n;
    printf("n : ");
    //Taking input from the user
    scanf("%d",&n);
    printf("%d",fib(n)); //Function call
    return 0;
}
//Function Defintion
int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int fibNm1 = fib(n-1);
    int fibNm2 = fib(n-2);
    int fibN = fib(n-1)+fib(n-2);
    return fibN;
}
