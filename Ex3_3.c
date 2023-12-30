#include <stdio.h>
int main() {
    long int x;
    printf("Enter any year:");
    scanf("%ld", &x);
    if ((x % 400 == 0) || (x % 4 == 0 && x % 100 != 0)) {
        printf("Leap year");
    } else {
        printf("Not a leap year");
    }
    return 0;
}
