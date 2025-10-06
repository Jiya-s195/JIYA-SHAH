#include <stdio.h>
int main(){
    int celsius;
    int fahreinheit;
    printf("Enter the value in fahreinheit:");
    scanf ("%d",&fahreinheit);
    celsius= (fahreinheit-32)*5/9;
    printf("%d fahreinheit is equal to %d celsius",fahreinheit,celsius);
    return 0;
}