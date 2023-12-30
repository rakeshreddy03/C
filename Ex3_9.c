#include <stdio.h>
int main(){
    int l , b;
    printf("Enter len and breadth: ");
    scanf("%d%d", &l,&b);
    int area, perimeter;
    area = l * b;
    perimeter = 2*(l+b);
    if(area > perimeter){
        printf("Area is greater");
    }
    else if(area == perimeter){
        printf("Area and perimeter are eqaul");
    }
    else{
        printf("Perimeter is greater");
    }
}