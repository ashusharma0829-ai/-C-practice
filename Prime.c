#include<stdio.h>
int main(){
    int num,flag=0;
    printf("enter num: ");
    scanf("%d",&num);
    if(num<=1){
        printf("Not Prime");
    }
        for(int i=2;i<=num;i++){
            if(num%i==0){
                flag = 1;
            }
        }
        if(flag==0){
            printf("Not Prime");
        }else{
            printf("Prime");
        }
    return 0;
}
