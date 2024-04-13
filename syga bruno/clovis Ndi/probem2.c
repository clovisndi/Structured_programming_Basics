
#include <stdio.h>

float calculate_minimum_payment(float annual_interest, float previous_balance) {
    float monthly_interest_rate = annual_interest / 12.0f;
    float lower_bound_payment = previous_balance / 12.0f;
    float upper_bound_payment = (previous_balance * (1.0f + monthly_interest_rate)) / 12.0f;
    float minimum_monthly_payment = (lower_bound_payment + upper_bound_payment) / 2.0f;

    while (1) {
        float remaining_balance = previous_balance;

        for (int i = 0; i < 12; i++) {
            float unpaid_balance = remaining_balance - minimum_monthly_payment;
            remaining_balance = unpaid_balance + (monthly_interest_rate * unpaid_balance);
        }
        if (remaining_balance <= 0.0f) {
            break;
        }

        if (minimum_monthly_payment * 12.0f > previous_balance * (1.0f + monthly_interest_rate)) {
            upper_bound_payment = minimum_monthly_payment;
        } else {
            lower_bound_payment = minimum_monthly_payment;
        }

        minimum_monthly_payment = (lower_bound_payment + upper_bound_payment) / 2.0f;
    }

    return minimum_monthly_payment;
}

int main() {
    float balance, annual_interest;

    printf("Enter the balance: ");
    scanf("%f", &balance);

    printf("Enter the annual interest: ");
    scanf("%f", &annual_interest);

    float minimum_payment = calculate_minimum_payment(annual_interest, balance);

    printf("The Lowest Payment: %.2f\n", minimum_payment);

    return 0;
}
