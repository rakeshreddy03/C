#include<stdio.h>
int main(){
    long int x;
    printf("Enter a five digit number: ");
    scanf("%ld", &x);
    int nx = x;
    long int rev = 0;
    while (nx > 0){
        int last = nx % 10;
        rev = (rev *10) + last;
        nx = nx /10;
    }
    printf("%d \n", rev);

    if(x == rev){
        printf("x and reverse are eqaul");
    }
    else{
        printf("Not equal");
    }

}