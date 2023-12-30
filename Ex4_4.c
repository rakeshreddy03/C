#include<stdio.h>
int main(){
    /*Rakesh Reddy*/
    int a,b,c;
    printf("Enter the value of len,breadth, height: ");
    scanf("%d%d%d", &a,&b,&c);
    if((a + b <= c) || (a + c <= b) || (b + c <= a)){
        printf("Not valid");
    }
    else{
        printf("Valid");
    }   
}