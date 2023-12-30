#include <stdio.h>
int main(){
    int x;
    printf("Enter cost price:");
    scanf("%d", &x);
    int y;
    printf("Enter selling price");
    scanf("%d", &y);
    if (x < y){
        int profit = y -x;
        printf("Profit : %d", profit);
    }
    else{
        int loss = x -y;
        printf("Loss: %d", loss);
    }
}