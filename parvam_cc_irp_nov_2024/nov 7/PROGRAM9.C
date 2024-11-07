#include <stdio.h>
#include <stdlib.h>
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int compare(const void *a, const void *b) {
    return (*(int *)b - *(int *)a); 
}

int solve_test_case(int arr[], int n) {

    qsort(arr, n, sizeof(int), compare);
    

    int max1 = arr[0];
    int max2 = -1;
    
    for (int i = 1; i < n; i++) {
        if (arr[i] != max1) {
            max2 = arr[i];
            break;
        }
    }


    if (max2 == -1) {
        printf("Error: No two distinct integers found.\n");
        return -1;
    }
    
    int max_sum = max1 + max2;


    return gcd(max_sum, max2);
}

int main() {
    int arr[] = {1, 2, 5, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = solve_test_case(arr, n);
    if (result != -1) {
        printf("GCD of the maximum sum and the second-largest distinct integer is: %d\n", result);
    }

    return 0;
}
