//Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

/*
Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/

#include <stdio.h>

void mergeSortedArrays(int nums1[], int m, int nums2[], int n) {
    int merged[m + n];
    int i = 0, j = 0, k = 0;

    // Merge while both arrays have elements
    while (i < m && j < n) {
        if (nums1[i] <= nums2[j]) {
            merged[k++] = nums1[i++];
        } else {
            merged[k++] = nums2[j++];
        }
    }

    // Copy remaining elements from nums1
    while (i < m) {
        merged[k++] = nums1[i++];
    }

    // Copy remaining elements from nums2
    while (j < n) {
        merged[k++] = nums2[j++];
    }

    // Print the merged array
    for (int x = 0; x < m + n; x++) {
        printf("%d ", merged[x]);
    }
    printf("\n");
}

int main() {
    // Sample Input
    int nums1[] = {2, 7, 11, 15};
    int nums2[] = {4, 8, 10};
    int m = sizeof(nums1) / sizeof(nums1[0]);
    int n = sizeof(nums2) / sizeof(nums2[0]);

    mergeSortedArrays(nums1, m, nums2, n);

    return 0;
}
