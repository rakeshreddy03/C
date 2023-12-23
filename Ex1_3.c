#include <stdio.h>
int main(){
    int s1,s2,s3,s4,s5;
    printf("Enter the marks in each subject out of 100:");
    scanf("%d%d%d%d%d \n", &s1,&s2,&s3,&s4,&s5);
    float agg_marks = s1 + s2 +s3 +s4 +s5;
    printf(" Aggregate marks:%.2f \n",agg_marks );
    float percent = (agg_marks/500)*100;
    printf("Percentage: %.2f \n", percent);
}