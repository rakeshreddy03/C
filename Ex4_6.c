#include<stdio.h>
int main() {
    /*Rakesh Reddy*/
    int weigh;
    printf("Enter your weight: ");
    scanf("%d", &weigh);
    if (weigh < 115) {
        printf("Flyweight");
    } else if (weigh >= 115 && weigh <= 122) {
        printf("Bantamweight");
    } else if (weigh >= 123 && weigh <= 153) {
        printf("Featherweight");
    } else if (weigh >= 154 && weigh <= 189) {
        printf("Middleweight");
    } else {
        printf("Heavyweight");
    }

    return 0;
}
