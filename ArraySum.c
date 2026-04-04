//Program to Add a array
#include<stdio.h>
//Function Prototype
int add(int *arr, int size);
int main(){
    int arr[] ={1, 2, 3, 4};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Sum of Array: %d",add(arr,size)); //Function call
    return 0;
}
//Function Definition
int add(int *arr, int size){
    int sum = 0;
    for(int i=0; i<size; i++){
    sum += *(arr+i);
    }
    return sum;
}
