//print reverse 1D array element and print sum of it
#include <stdio.h>
void Reverse(int arr[], int size) {
	int i;
    for ( i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int sumArray(int arr[], int size) {
    int sum = 0;
    int i;
    for ( i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
	int i;
    int arr[] = {2, 4, 6, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("The original array is: ");
    for ( i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf(" The reversed array is: ");
    Reverse(arr, size);

    int sum = sumArray(arr, size);
    printf("Sum of array elements: %d\n", sum);
}
