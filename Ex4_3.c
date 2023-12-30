#include <stdio.h>
int main(){
    /*Rakesh Reddy*/
    float hard, carbon, tensile;
    printf("Enter Hardness, Carbon, Tensile");
    scanf("%f%f%f", &hard,&carbon,&tensile);
    if(hard > 50 && carbon < 0.7 && tensile > 5600){
        printf("Grade is 10");
    }
    else if(hard > 50 && carbon < 0.7){
        printf("Grade is 9");
    }
    else if(carbon < 0.7 && tensile > 5600){
        printf("Grade is 8");
    }
    else if(hard > 50 && tensile > 5600){
        printf("Grade is 7");
    }
    else if(hard > 50){
        printf("Grade is 6");
    }
    else{
        printf("Grade is 5");
    }
}