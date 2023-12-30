#include<stdio.h>
int main(){
    float x;
    scanf("%.2f", &x);
    if ( x < 0){
       x = (-1) * x; 
    }
    printf("Absolute of x: %f " , x );
}