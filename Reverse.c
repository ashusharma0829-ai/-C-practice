#include<stdio.h>
int main(){
    int n,temp,digit,rev=0;
    printf("Enter Element to be reverse: ");
    scanf("%d",&n);
    temp = n;
    while(temp!=0){
        digit = temp%10;
       rev = rev *10 + digit;
        temp = temp/10;
    }
    printf("Reverse Number: %d",rev);
    return 0;
}
