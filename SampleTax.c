#include<stdio.h>
int main(){
float Tax = 0, income;
printf("enter your income \n"),
scanf("%f",& income);
if(income >= 250000 && income <= 500000)
{
    Tax = Tax + 0.05 * (income-250000);
}

if(income > 500000 && income <= 1000000)
{
    Tax = Tax + 0.20 * (income-500000);
}

if(income > 1000000)
{
    Tax = Tax + 0.30 * (income-250000);
}
printf("your net paylable tax is %f\n",Tax);
 

return 0;
}