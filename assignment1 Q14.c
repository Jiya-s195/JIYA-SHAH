#include <stdio.h>
int main(){
    int celsius;
    int fahreinheit;
    printf("Enter the value in celsius:");
    scanf ("%d",&celsius);
    fahreinheit = (celsius*9/5)+32;
    printf("%d fahreinheit is equal to %d celsius",fahreinheit,celsius);
    return 0;
}