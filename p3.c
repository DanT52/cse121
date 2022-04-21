#include<stdio.h>

int main(void)
{
    //declare vairables

    int years, month, final_month;

    double loan_balance, interest_for_this_month, monthly_payment, total_interest;
    double monthly_interest_rate, annual_interest_rate;

    // Get user input
    printf("\n\nLoan Amount: ");
    scanf("%lf", &loan_balance);

    printf("How many years is your loan: ");
    scanf("%i", &years);

    printf("Annual interest rate %%: ");
    scanf("%lf", &annual_interest_rate);

    printf("Monthly payment: ");
    scanf("%lf", &monthly_payment);

    //maths

    monthly_interest_rate = (annual_interest_rate/100) /12;

    final_month = years*12;
    total_interest = 0.0;

    for(month =1; month <= final_month; month++)
    {
        interest_for_this_month = monthly_interest_rate * loan_balance;

        total_interest = total_interest + interest_for_this_month;

        loan_balance = loan_balance - (monthly_payment - interest_for_this_month);

        //Print monthly
        printf("\nMonth(%i)",month);
        printf("  Interest = %5.2f,", interest_for_this_month);
        printf("  Left over Payment = %7.2f,",monthly_payment - interest_for_this_month);
        printf("  Balance = %10.2f", loan_balance);

    }

    //PRINT results

    printf("\nTotal Interest = %10.2f\n", total_interest);
    printf("Final Loan Balance = %5.2f\n\n", loan_balance);

    return 0;
}