//Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

/*
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/
#include <stdio.h>

#define MAX 1000  // Assumed maximum value in array

int findDuplicate(int arr[], int n) {
    int freq[MAX] = {0};

    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] == 1) {
            return arr[i];  // Found duplicate
        }
        freq[arr[i]] = 1;
    }

    return -1;  // Shouldn't happen if one duplicate is guaranteed
}

int main() {
    // Sample Input
    int arr[] = {0, 4, 1, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int duplicate = findDuplicate(arr, n);
    printf("%d\n", duplicate);

    return 0;
}
