#include<stdio.h>
//To check number is palindrome or not
int main(){
int n ,temp,digit,rev = 0;
printf("Enter Element n : ");
scanf("%d",&n);
temp = n;
while(temp!=0){
    digit = temp%10;
    rev = rev*10+digit;
    temp = temp/10;
}
if(rev == n){
    printf("Palindrome");
}else{
    printf("Not Palindrome");
}
    return 0;
}
