#include<stdio.h>
#include<math.h>
int main(){
    /*Rakesh Reddy*/
    int x1 , x2;
    printf("Enter the angles: ");
    scanf("%d%d", &x1, &x2);
    int sum;
    sum =  pow(sin(x1),2) + pow(cos(x2),2) ; 
    int y;
    y = (sum == 1 ? printf("Sum equals to 1") : printf("Sum not equals to 1"));
}