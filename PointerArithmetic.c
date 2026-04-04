//program for Pointer Arithmetic 
#include<stdio.h>
int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    printf("Array: %d\n",*(ptr));
    printf("Array: %d\n",*(ptr+1));
    printf("Array: %d\n",*(ptr+2));
    printf("Array: %d",*(ptr+3));
    return 0;
}
