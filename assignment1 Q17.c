#include <stdio.h>
int main(){
    float side,area,perimeter;
    printf("Enter the length of the side of the square:");
    scanf("%f",&side);
    area = side*side;
    perimeter = 4*side;
    printf("The area of the square is: %.2f\n",area);
    printf("The perimeter of the square is: %.2f\n",perimeter);
    return 0;
}