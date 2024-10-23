//to find sum of array using function
#include <stdio.h>
int sumarr(int arr[], int size) {
	int i;
    int sum = 0; 
    for ( i = 0; i < size; i++) {
        sum += arr[i]; 
    }
    return sum; 
}
main() {
    int n,i; 
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n); 
    int arr[n]; 
    printf("Enter %d elements:\n", n);
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }
    int summation = sumarr(arr, n);
    printf("The sum of the array elements is: %d\n", summation);
}
