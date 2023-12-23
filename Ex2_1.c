#include <stdio.h>
int main(){
    int a,sum,temp;
    sum =0;
    printf("Enter a five digit number:");
    scanf("%d", &a);
    for(int i= 0; i<5; i++){
        temp = a % 10;
        sum = sum+temp;
        a = a / 10;
    }
    printf("Sum: %d \n", sum);
}