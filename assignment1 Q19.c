#include <stdio.h>
#include<math.h>
int main(){
    float side,area;
    const float PI=3.14159;
    printf("Enter the length of side:");
    scanf("%f",&side);
    area = PI*pow(side,2);
    printf("The area of circle:%.2f\n",area);
    return 0;
}