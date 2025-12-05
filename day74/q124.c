//Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/

#include <stdio.h>

int main() {
    FILE *source, *destination;
    char sourceFile[100], destFile[100];
    char ch;

    // Get filenames from user
    printf("Enter source filename: ");
    scanf("%99s", sourceFile);

    printf("Enter destination filename: ");
    scanf("%99s", destFile);

    // Open source file in read mode
    source = fopen(sourceFile, "r");
    if (source == NULL) {
        printf("Error: Cannot open source file.\n");
        return 1;
    }

    // Open destination file in write mode
    destination = fopen(destFile, "w");
    if (destination == NULL) {
        printf("Error: Cannot create destination file.\n");
        fclose(source);
        return 1;
    }

    // Copy content character by character
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    // Close both files
    fclose(source);
    fclose(destination);

    printf("File copied successfully to %s\n", destFile);

    return 0;
}