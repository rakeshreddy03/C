#include<stdio.h>
int main(){
    /*Rakesh Reddy*/
    long int x;
    printf("Enter any year: ");
    scanf("%ld", &x);
    int y;
    y = (((x % 400 == 0) || (x % 4 == 0 && x % 100 != 0)) ? 1:0);
    printf("%d", y);
}