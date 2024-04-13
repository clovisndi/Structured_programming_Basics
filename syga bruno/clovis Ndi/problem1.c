#include <stdio.h>

int main() {
    float balance, annualInterestRate, monthlyPaymentRate;
    printf("Enter the  balance: ");
    scanf("%f", &balance);
    printf("Enter the annual interest rate (as a decimal): ");
    scanf("%f", &annualInterestRate);
    printf("Enter the minimum monthly payment rate (as a decimal): ");
    scanf("%f", &monthlyPaymentRate);

    float monthlyInterestRate = annualInterestRate / 12.0;
    float totalPaid = 0.0;

    for (int i = 1; i <= 12; i++) {
        float minMonthlyPayment = monthlyPaymentRate * balance;
        float monthlyUnpaidBalance = balance - minMonthlyPayment;
        balance = monthlyUnpaidBalance + (monthlyInterestRate * monthlyUnpaidBalance);
        totalPaid += minMonthlyPayment;
        printf("Month: %d\n", i);
        printf("Minimum monthly payment: %.2f\n", minMonthlyPayment);
        printf("Remaining balance: %.2f\n", balance);
    }

    printf("Total paid: %.2f\n", totalPaid);
    printf("Remaining balance: %.2f\n", balance);
    return 0;
}
