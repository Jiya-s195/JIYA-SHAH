#include <stdio.h>
int main(){
    int dollars;
    int pounds;
    int rupees;
    printf("Enter the no. of dollars:");
    scanf("%d",&dollars);
    rupees = dollars*48;
    pounds = rupees/70;
    printf("Converted amount:%d pounds",pounds);
    return 0;

}