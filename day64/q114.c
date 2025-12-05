//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/

#include <stdio.h>
#include <string.h>

int isUnique(char *s, int start, int end) {
    int visited[256] = {0}; // ASCII character set

    for (int i = start; i <= end; i++) {
        if (visited[(unsigned char)s[i]]) {
            return 0;
        }
        visited[(unsigned char)s[i]] = 1;
    }
    return 1;
}

int lengthOfLongestSubstring(char *s) {
    int max_len = 0;
    int n = strlen(s);

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (isUnique(s, i, j)) {
                int len = j - i + 1;
                if (len > max_len) {
                    max_len = len;
                }
            }
        }
    }

    return max_len;
}

int main() {
    // Sample Input
    char s[] = "abcabcbb";

    int result = lengthOfLongestSubstring(s);
    printf("%d\n", result);

    return 0;
}