#include <stdio.h>
int main(){
    float grams;
    float kg;
    printf("Enter the no. of grams:");
    scanf("%f",&grams);
    kg = grams/1000;
    printf("%f grams is equal to %f kg",grams,kg);
    return 0;

}