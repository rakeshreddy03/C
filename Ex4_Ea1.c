#include<stdio.h>
int main(){
    /*Rakesh Reddy*/
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    int n =ch;
    int y;
    y= (n >= 65 && n<= 90 ? 1:0);
    printf("%d", y);
}