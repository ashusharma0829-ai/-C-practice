#include <stdio.h>

// Find duplicate elements in array
int main() {
    int arr[5] = {1, 2, 3, 2, 1};
    int i, j;

    printf("Duplicate elements: ");

    for(i = 0; i < 5; i++) {
        for(j = i + 1; j < 5; j++) {
            if(arr[i] == arr[j]) {
                printf("%d ", arr[i]);
            }
        }
    }

    return 0;
}
