#include <stdio.h>
int main(){
    int a,b,t;
    scanf("%d%d", &a,&b);
    t = a;
    a = b;
    b = t;
    printf("a: %d \n b: %d \n", a,b);
}