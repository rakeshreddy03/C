#include<stdio.h>
int main(){
    int ram, shyam , ajay;
    printf("Enter the ages: ");
    scanf("%d%d%d", &ram,&shyam,&ajay);
    if(ram < shyam && ram < ajay){
        printf("Ram is youngest");
    }
    else if(shyam < ram && shyam < ajay){
        printf("Shyam is youngest");
    }
    else if (ajay < ram && ajay < shyam){
        printf("Ajay is youngest");
    }
}