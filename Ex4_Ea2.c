#include<stdio.h>
int main(){
    /*Rakesh Reddy*/
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    int n =ch;
    int y;
    y= (((n >=0 && n<= 47) || (n>=58 && n<=64) || (n>=91 && n<= 96) ||(n>=123 && n<= 127))  ? 1:0);
    printf("%d", y);
}