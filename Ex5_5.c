#include <stdio.h>
#include <math.h>
int isArmstrong(int num) {
    int originalNum = num;
    int digitCount = 0, sum = 0;

    while (originalNum != 0) {
        originalNum /= 10;
        digitCount++;
    }

    originalNum = num;  

    while (originalNum != 0) {
        int digit = originalNum % 10;
        sum += pow(digit, digitCount);
        originalNum /= 10;
    }
    return (num == sum);
}

int main() {
    printf("Armstrong numbers between 1 and 500:\n");

    for (int i = 1; i <= 500; i++) {
        if (isArmstrong(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}
