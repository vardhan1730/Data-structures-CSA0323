#include <stdio.h>

int main() {
    int arr[3][3] = {{1, 2, 3}, {5, 6, 7}, {9, 10, 11}};
    int i, j;
    
    printf("Elements of the array:\n");
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
