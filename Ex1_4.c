#include <stdio.h>
int main(){
    float fah_de , centi;
    printf("Enter the temperature in Fahrenheit degree: \n");
    scanf("%f", &fah_de);
    centi = (fah_de - 32)/1.8;
    printf("In Centigrade: %.2f \n", centi);
}