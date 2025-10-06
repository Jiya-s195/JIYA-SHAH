#include <stdio.h>
int main(){
    float gross_salary,allowance,deduction,net_salary;
    printf("Enter the gross salary:");
    scanf("%f",&gross_salary);
    allowance=0.10*gross_salary;
    deduction=0.03*gross_salary;
    net_salary=gross_salary=allowance-deduction;
    printf("Allowance (10%% of gross salary):%.2f\n",allowance);
    printf("Deduction(3%% of gross salary):%.2f\n",deduction);
    printf("Net salary:%.2f\n",net_salary);
    return 0;
}