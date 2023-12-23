#include <stdio.h>
int main(){
    float l,b,r;
    printf("Enter length,breadth,radius:");
    scanf("%f%f%f", &l,&b,&r);
    printf("Area of ractangle: %.2f\n", l*b);
    printf("Area of circle: %.2f \n", 3.14*r*r);
    printf("Perimeter of rectangle: %.2f\n", 2*(l+b));
    printf("Circumference of circle: %.2f\n", 2*3.14*r);
}