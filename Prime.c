//Program to Check Number is Prime or not
#include<stdio.h>
int main(){
  int n,flag=0;
  printf("Enter n: ");
  //Taking input from the user
  scanf("%d",&n);
  if(n<=1){
    printf("Not Prime");
  }
  for(int i=2;i<=n;i++){
    if(n%i==0){
        flag = 1;
        break;
    }
  }
  //Condition to Check 
  if(flag == 1){
    printf("Prime");
  }else{
    printf("Not Prime");
  }
    return 0;
}
