#include<stdio.h>
int main(){
    int date;
    scanf("%d",&date);
    int temp;
    temp=(date-1)%7;
    if((date-1)%4==0){
        temp=temp+1;
    }
    switch(temp) {
        case 1: 
        printf("Tuesday");
        break;
        case 2: 
        printf("Wednesday");
        break;
        case 3: 
        printf("Thursday");
        break;
        case 4: 
        printf("Friday");
        break;
        case 5: 
        printf("Saturday");
        break;
        case 6: 
        printf("Sunday");
        break;
        case 0: 
        printf("Monday");
        break;
    }
    
}