#include<stdio.h>
int main(){
    int x;
    printf("Enter any number:");
    scanf("%d", &x);
    if(x % 2 ==0){
        printf("It is even");
    }
    else{
        printf("It is odd");
    }
}