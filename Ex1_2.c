#include <stdio.h>
int main(){
    float dist;
    printf("Enter the distance in km:");
    scanf("%f", &dist);
    float meters, feet , inches, cm;
    meters = dist*1000;
    feet = dist*3280.83;
    inches = dist*39370.07;
    printf("%f \n %f \n %f \n ",meters,feet,inches);
    cm = dist*100;
}