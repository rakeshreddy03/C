#include <stdio.h>
int main() {
    /*Rakesh Reddy*/
    int month, day;

    printf("Enter month of birth (1-12): ");
    scanf("%d", &month);

    printf("Enter day of birth: ");
    scanf("%d", &day);

    if ((month == 12 && day >= 22) || (month == 1 && day <= 19))
        printf("Zodiac Sign: Capricorn\n");
    else if ((month == 1 && day >= 20) || (month == 2 && day <= 17))
        printf("Zodiac Sign: Aquarius\n");
    else if ((month == 2 && day >= 18) || (month == 3 && day <= 19))
        printf("Zodiac Sign: Pisces\n");
    else if ((month == 3 && day >= 20) || (month == 4 && day <= 19))
        printf("Zodiac Sign: Aries\n");
    else if ((month == 4 && day >= 20) || (month == 5 && day <= 20))
        printf("Zodiac Sign: Taurus\n");
    else if ((month == 5 && day >= 21) || (month == 6 && day <= 20))
        printf("Zodiac Sign: Gemini\n");
    else if ((month == 6 && day >= 21) || (month == 7 && day <= 22))
        printf("Zodiac Sign: Cancer\n");
    else if ((month == 7 && day >= 23) || (month == 8 && day <= 22))
        printf("Zodiac Sign: Leo\n");
    else if ((month == 8 && day >= 23) || (month == 9 && day <= 22))
        printf("Zodiac Sign: Virgo\n");
    else if ((month == 9 && day >= 23) || (month == 10 && day <= 22))
        printf("Zodiac Sign: Libra\n");
    else if ((month == 10 && day >= 23) || (month == 11 && day <= 21))
        printf("Zodiac Sign: Scorpio\n");
    else if ((month == 11 && day >= 22) || (month == 12 && day <= 21))
        printf("Zodiac Sign: Sagittarius\n");
    else
        printf("Invalid input\n");

    return 0;
}
