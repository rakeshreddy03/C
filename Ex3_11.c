#include <stdio.h>
#include<math.h>
int main(){
    int x , y;
    int radius;
    printf("Enter the center of circle: ");
    scanf("%d%d", &x,&y);
    printf("Enter the radius: ");
    scanf("%d", &radius);
    int x1, y1;
    printf("Eneter the points: ");
    scanf("%d%d", &x1,&y1);
    int dist = sqrt(pow((x1-x),2) + pow((y1-y),2));
    if(dist < radius){
        printf("Point lies inside");
    }
    else if(dist == radius){
        printf("Point lies on the circle ");
    }
    else{
        printf("The point lies outside the circle");
    }
}