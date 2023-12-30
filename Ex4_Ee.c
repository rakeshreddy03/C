#include <stdio.h>
int main() {
    /*Rakesh Reddy*/
    float sal;
    printf("Enter the salary: ");
    scanf("%f", &sal);
    printf("Designation: %s\n", (sal >= 25000 && sal <= 40000) ? "Manager" : 
                                (sal >= 15000 && sal < 25000) ? "Accountant" : "Clerk");

    return 0;
}
