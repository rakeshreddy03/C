#include <stdio.h>
int main(){
    int a ;
    scanf("%d", &a);
    int sum =0;
    while(a > 0){
        int last_digit = a %10;
        sum = (sum * 10)+last_digit;
        a = a/10;
    }
    printf("Reverse: %d", sum);
}
