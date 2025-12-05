//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/


#include <stdio.h>
#include <string.h>

int main() {
    char date[11]; // Format: dd/mm/yyyy
    scanf("%s", date);

    char day[3], month[3], year[5];
    strncpy(day, date, 2);
    day[2] = '\0';

    strncpy(month, date + 3, 2);
    month[2] = '\0';

    strncpy(year, date + 6, 4);
    year[4] = '\0';

    // Month names indexed from 0 to 11
    char *months[] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    int monthIndex = (month[0] - '0') * 10 + (month[1] - '0');

    if (monthIndex >= 1 && monthIndex <= 12) {
        printf("%s-%s-%s\n", day, months[monthIndex - 1], year);
    } else {
        printf("Invalid month format.\n");
    }

    return 0;
}

