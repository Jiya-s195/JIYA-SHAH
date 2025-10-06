#include <stdio.h>
int main(){
    float height,length,area;
    printf("Enter the height of the triangle:");
    scanf("%f",&height);
    printf("Enter the length of the triangle:");
    scanf("%f",&length);
    area=(height*length)/2;
    printf("The area of the triangle is:%.2f\n",area);
    return 0;
}