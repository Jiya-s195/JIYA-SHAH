#include <stdio.h>
int main(){
    long long bytes;
    printf("Enter the number of bytes:");
    scanf("%lld",&bytes);
    double kilobytes=(double)bytes/1024;
    double megabytes=kilobytes/1024;
    double gigabytes=megabytes/1024;
    printf("\nConversion results:\n");
    printf("Bytes: %lld\n",bytes);
    printf("Kilobytes (KB):%.2f\n",kilobytes);
    printf("Megabytes (MB):%.2f\n",megabytes);
    printf("Gigabytes (GB):%.2f\n",gigabytes);
    return 0;
}