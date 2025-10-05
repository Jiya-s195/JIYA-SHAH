#include <stdio.h>
int main(){
    int hours;
    int minutes;
    printf("Enter no. of minutes:");
    scanf("%d",&minutes);
    hours=minutes/60;
    printf("%d hours is equal to %d minutes.\n",hours,minutes);
    return 0;
}