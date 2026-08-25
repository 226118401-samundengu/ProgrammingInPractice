#include <stdio.h>
int main(){
    double revenue;
    double expenses;
    double balance;
    int departments;
double payroll;
double procurement;
double assets;
    printf("MUNICIPAL BUDGET CALCULATOR\n");
    printf("-------------------------\n");
   
    printf("Enter Revenue amount\n");
    scanf("%lf", &revenue);
    printf("Enter expense amount\n");
    scanf("%lf", &expenses);
    
    balance = revenue - expenses;
   
    printf("Revenue: %.2f\n", revenue);
    printf("Expense: %.2f\n", expenses);
    printf("Balance: %.2f\n", balance);
   
    printf("Enter number of departments\n");
    scanf("%d", &departments);
    printf("Enter payroll amount\n");
    scanf("%lf", &payroll);
    printf("Enter procurement\n");
    scanf("%lf", &procurement);
    printf("Enter Assests\n");
    scanf("%lf", &assets);
   
    printf("Payroll: %.2f\n", payroll);
    printf("Procurement: %.2f\n", procurement);
    printf("Assets: %.2f\n", assets);
    printf("Departments: %d\n", departments);
  
    return 0;

}