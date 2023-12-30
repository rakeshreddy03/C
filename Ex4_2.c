#include<stdio.h>
int main(){
    /*Rakesh Reddy*/
    char ch ;
    printf("Enter any letter or number or symbol: ");
    scanf("%c", &ch);
    int t = ch;
    if((t >= 65 && t <= 90)){
        printf("You entered a Captial letter");
    }
    else if((t >= 97 && t <= 122)){
        printf("You entered a small letter");
    }
    else if((t >= 48 && t <= 57)){
        printf("You entered a number b/t 0-9");
    }
    else{
        printf("You entered a special character");
    }
}