#include <stdio.h>
#include "main.h"

/**
* main - entry point
* Return: 0
*/

// Main function for testing
int main() {
    // Test positive_or_negative
    positive_or_negative(5);
    positive_or_negative(-3);
    positive_or_negative(0);

    // Test largest_number
    printf("Largest number: %d\n", largest_number(10, 20, 15));

    // Test convert_day
    printf("Day of the year: %d\n", convert_day(3, 15));

    // Test print_remaining_days
    print_remaining_days(3, 15, 2024); // Leap year example
    print_remaining_days(3, 15, 2023); // Non-leap year example

    return 0;
}
