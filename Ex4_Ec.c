#include<stdio.h>
int main(){
    /*Rakesh Reddy*/
    int big,a,b,c;
    printf("Enter a,b,c: ");
    scanf("%d%d%d", &a,&b,&c);
    big = ((a > b ?(a > c ? printf("A is bigger"): printf("A is not bigger than b and c")) : (b > c ? printf("B is greater"): printf("C is bigger")) ));
}