#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter angle of a trinagle:");
    scanf("%d%d%d", &x,&y,&z);
    int sum = x+y+z;
    if(sum == 180){
        printf("Valid triangle");
    }
    else{
        printf("Not a valid triangle");
    }
}