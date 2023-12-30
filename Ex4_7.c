#include <stdio.h>
#include<math.h>
int main() {
    /*Rakesh Reddy*/
    int red, green, blue;

    printf("Enter RGB values (0-255): ");
    scanf("%d %d %d", &red, &green, &blue);

    float white = fmaxf(fmaxf(red / 255.0, green / 255.0), blue / 255.0);
    float cyan = (white - red / 255.0) / white;
    float magenta = (white - green / 255.0) / white;
    float yellow = (white - blue / 255.0) / white;
    float black = 1.0 - white;

    printf("CMYK values: %.2f %.2f %.2f %.2f\n", cyan, magenta, yellow, black);

    return 0;
}
