#include <stdio.h>
int main() {
    float x1, y1, x2, y2, x3, y3;
    printf("Enter the points:");
    scanf("%d%d%d%d%d%d", &x1,&y1,&x2,&y2,&x3,&y3);
    float slope1 = (y2 - y1) / (x2 - x1);
    float slope2 = (y3 - y2) / (x3 - x2);
    if (slope1 == slope2) {
        printf("The three points are on the same straight line.\n");
    } else {
        printf("The three points are not on the same straight line.\n");
    }

    return 0;
}
