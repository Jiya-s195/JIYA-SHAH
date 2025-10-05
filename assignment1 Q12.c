#include <stdio.h>
int main(){
    float grams;
    float kg;
    printf("Enter the no. of kg:");
    scanf("%f",&kg);
 grams = kg*1000;
    printf("%f grams is equal to %f kg",grams,kg);
    return 0;

}