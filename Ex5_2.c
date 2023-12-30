#include<stdio.h>
int main(){
    int i =1;
    int num;
    int factorial =1;
    scanf("%d", &num);
    while(i<=num){
        factorial *=i;
        i +=1;
    }
    printf("%d", factorial);
}