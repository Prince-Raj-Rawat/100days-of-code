//Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

/*
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/

#include <stdio.h>

int maxSubarraySum(int arr[], int n, int k) {
    int max_sum = 0;

    // Loop through all subarrays of size k
    for (int i = 0; i <= n - k; i++) {
        int current_sum = 0;
        for (int j = 0; j < k; j++) {
            current_sum += arr[i + j];
        }
        if (current_sum > max_sum || i == 0) {
            max_sum = current_sum;
        }
    }

    return max_sum;
}

int main() {
    // Sample Input
    int arr[] = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int k = 4;
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = maxSubarraySum(arr, n, k);
    printf("%d\n", result);

    return 0;
}