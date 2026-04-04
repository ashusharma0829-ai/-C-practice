//Program to swap two numbers using pointer
#include<stdio.h>
//Function Prototype
int sum(int *a, int *b);
int main(){
    int x = 5, y = 10;
    sum(&x,&y);  //function call
    printf("X = %d y = %d",x,y);
    return 0;
}
//Funciton definition 
int sum(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
