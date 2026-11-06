// Write a C program using `switch` that reads a number from 1 to 7 and prints the corresponding day of the week. If the number is outside that range, print `"Invalid day"`.
#include <stdio.h>

int main() {
    int day;
    scanf("%d", &day);
    switch (day) {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Invalid day");
    }

    return 0;
}