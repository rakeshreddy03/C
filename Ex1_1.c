#include <stdio.h>
int main(){
    float basic_salary;
    printf("Enter the basic salary: ");
    scanf("%f", &basic_salary);
    float allo = basic_salary * 0.4;
    float rent = basic_salary * 0.2;
    printf("allowances: %f \n", allo);
    printf("rent: %f\n", rent);
    float gross = basic_salary - (allo + rent);
    printf("%f \n",gross);
}