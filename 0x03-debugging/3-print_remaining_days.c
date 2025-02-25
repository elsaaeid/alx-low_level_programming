#include <stdio.h>


/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year) {
    int is_leap_year = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
    int total_days_in_year = is_leap_year ? 366 : 365;

    if (is_leap_year && month > 2) {
        day += 1; // Adjust for leap year
    }

    int day_of_year = convert_day(month, day);
    int remaining_days = total_days_in_year - day_of_year;

    printf("Day of the year: %d\n", day_of_year);
    printf("Remaining days: %d\n", remaining_days);
}
