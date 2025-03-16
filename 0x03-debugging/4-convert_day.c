/**
 * convert_day - converts a date (month and day) into the day of the year
 * @month: month in number format
 * @day: day of month
 * Return: day of the year
 */
int convert_day(int month, int day) {
    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int day_of_year = 0;

    for (int i = 1; i < month; i++) {
        day_of_year += days_in_month[i];
    }
    day_of_year += day;

    return day_of_year;
}
