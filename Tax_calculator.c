#include <stdio.h>
int main()
{
    float income;
    printf("Enter Your Income \n");
    scanf("%f", &income);
    if (income < 250000)
    {
        printf("You don't have to pay tax \n");
    }
    else if (income <= 500000 && income >= 250000)
    {
        float ext_income = income - 250000;
        float tax = ext_income * 0.05;
        printf("You have to pay tax! Your tax is clear %f \n", tax);
    }
    else if (income >= 500000 && income <= 1000000)
    {
        float ext_income = income - 500000;
        float tax = ext_income * 0.2;
        printf("You have to pay tax! Your tax is %f \n", tax);
    }
    else if (income > 1000000)
    {
        float ext_income = income - 1000000;
        float tax = ext_income * 0.3;
        printf("You have to pay tax! Your tax is %f \n", tax);
    }
    else
    {
        printf("invalid input \n");
    }
    return 0;
}