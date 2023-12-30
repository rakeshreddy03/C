#include <stdio.h>
int main() {
    float weight, height;

    printf("Enter weight in kilograms: ");
    scanf("%f", &weight);

    printf("Enter height in meters: ");
    scanf("%f", &height);

    float bmi = weight / (height * height);

    printf("BMI: %.2f\n", bmi);
    if (bmi < 18.5)
        printf("Category: Underweight\n");
    else if (bmi >= 18.5 && bmi < 25)
        printf("Category: Normal weight\n");
    else if (bmi >= 25 && bmi < 30)
        printf("Category: Overweight\n");
    else
        printf("Category: Obesity\n");

    return 0;
}
