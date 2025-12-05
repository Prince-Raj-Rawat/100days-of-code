//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/

#include <stdio.h>

int main() {
    FILE *file;
    char filename[100] = "data.txt";  // You can also ask the user to input this
    char newText[200];

    // Open the file in append mode
    file = fopen(filename, "a");

    if (file == NULL) {
        printf("Error: Could not open the file.\n");
        return 1;
    }

    // Prompt user for input
    printf("Enter text to append: ");
    getchar(); // Clear newline from previous input
    fgets(newText, sizeof(newText), stdin);

    // Append the text to the file
    fputs(newText, file);

    // Close the file
    fclose(file);

    printf("File updated successfully with appended text.\n");

    return 0;
}
