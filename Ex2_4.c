#include <stdio.h>
#include <math.h>
int main(){
    int a,b;
    float r,phi;
    printf("Enter the coordinates:");
    scanf("%d%d", &a,&b);
    r = sqrt(a*a + b*b);
    phi = atan(b/a);
    printf("Polar Coordinates: %.2f \n %.2f \n", r ,phi);
}