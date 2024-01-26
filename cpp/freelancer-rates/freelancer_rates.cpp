// INFO: Headers from the standard library should be inserted at the top via
#include <string>
#include <iostream>
// #include <LIBRARY_NAME>

// daily_rate calculates the daily rate given an hourly rate
double daily_rate(double hourly_rate)
{
    int hours_to_work = 8;
    return hourly_rate * hours_to_work;
}

// apply_discount calculates the price after a discount
double apply_discount(double before_discount, double discount)
{
    double amount_to_keep = (100.0 - discount) / 100;
    return before_discount * amount_to_keep;
}

// monthly_rate calculates the monthly rate, given an hourly rate and a discount
// The returned monthly rate is rounded up to the nearest integer.
int monthly_rate(double hourly_rate, double discount)
{
    int billable_days = 22;
    double daily_income = daily_rate(hourly_rate);
    double before_discount = billable_days * daily_income;

    double amount_after_discount = apply_discount(before_discount, discount);
    return std::ceil(amount_after_discount);
}

// days_in_budget calculates the number of workdays given a budget, hourly rate,
// and discount The returned number of days is rounded down (take the floor) to
// the next integer.
int days_in_budget(int budget, double hourly_rate, double discount)
{
    // TODO: Implement a function that takes a budget, an hourly rate, and a
    // discount, and calculates how many complete days of work that covers.
    int daily_income = daily_rate(hourly_rate);

    int after_discount = apply_discount(daily_income, discount);
    

    int work_days = budget / after_discount;

    return work_days;
}
