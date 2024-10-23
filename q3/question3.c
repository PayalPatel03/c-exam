//to find cube of each elements of 1D array using pointer
#include <stdio.h>
void cubearr(int *array, int length) {
	int i;
    for ( i = 0; i < length; i++) {
        *(array + i) = *(array + i) * *(array + i) * *(array + i);
    }
}
int main() {
	int i;
    int arr[5] = {2, 4, 6, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("The original array is: ");
    for ( i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    cubearr(arr, size);

    printf(" The given array after cubing is: ");
    for ( i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}
