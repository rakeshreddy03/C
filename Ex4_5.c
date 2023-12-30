#include <stdio.h>
int main() {
    /*Rakesh Reddy*/
    float side1, side2, side3;
    printf("Enter the length of side 1: ");
    scanf("%f", &side1);

    printf("Enter the length of side 2: ");
    scanf("%f", &side2);

    printf("Enter the length of side 3: ");
    scanf("%f", &side3);

    if ((side1 + side2 > side3) && (side2 + side3 > side1) && (side3 + side1 > side2)) {
        if (side1 == side2 && side2 == side3) {
            printf("Equilateral Triangle\n");
        } else if (side1 == side2 || side2 == side3 || side3 == side1) {
            printf("Isosceles Triangle\n");
        } else {
            printf("Scalene Triangle\n");
        }

        if ((side1 * side1 + side2 * side2 == side3 * side3) ||
            (side2 * side2 + side3 * side3 == side1 * side1) ||
            (side3 * side3 + side1 * side1 == side2 * side2)) {
            printf("Right-Angled Triangle\n");
        }
    } else {
        printf("Invalid Triangle\n");
    }

    return 0;
}
