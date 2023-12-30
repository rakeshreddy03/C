#include<stdio.h>
int main(){
    /*Rakesh Reddy*/
    int i = 1;
    int overtime;
    int hrs;
    while (i <=10){
        printf("No.of hours worked above 40 hrs: ");
        scanf("%d", &hrs);
        if(hrs > 40){
            overtime = (hrs -40)*12;
        }
        printf("Overtime: %d%d\n",overtime);
    }

}