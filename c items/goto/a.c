// Write a C program using a `goto` statement to print the numbers from 1 to 5.
#include <stdio.h>
int main() {
int i = 1;
repeat:
if (i > 5) {
goto end;
 }
printf("%d ", i);
i++;
goto repeat;
end:
    return 0;
}