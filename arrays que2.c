#include<stdio.h>
int main(){
int arr[10];
printf("Enter 10 integers:\n");
for(i=0;i<10;i++){
scanf("%d\n",&arr[i]);
}
printf("4th value:\n",arr[3]);
printf("7th value:\n",arr[6]);
printf("9th value:\n",arr[8]);
return0;

}
