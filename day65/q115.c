//Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

/*
Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/

#include <stdio.h>
#include <string.h>

#define CHAR_COUNT 26  // For lowercase English letters

int isAnagram(char *s, char *t) {
    int freq[CHAR_COUNT] = {0};

    // If lengths differ, they can't be anagrams
    if (strlen(s) != strlen(t)) {
        return 0;
    }

    // Count frequency of each character in s and t
    for (int i = 0; s[i] != '\0'; i++) {
        freq[s[i] - 'a']++;
        freq[t[i] - 'a']--;
    }

    // Check if all frequencies are zero
    for (int i = 0; i < CHAR_COUNT; i++) {
        if (freq[i] != 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    // Sample Input
    char s[] = "anagram";
    char t[] = "nagaram";

    if (isAnagram(s, t)) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }

    return 0;
}