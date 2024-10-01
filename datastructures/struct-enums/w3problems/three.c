#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Date {
    int day;
    int month ;
    int year ;
} Date ;

int isLeapYear(int year) {
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
        return 1;
    return 0;
}

int daysInMonth(int month, int year) {
    switch (month) {
        case 1: return 31;  // January
        case 2: return isLeapYear(year) ? 29 : 28;  // February
        case 3: return 31;  // March
        case 4: return 30;  // April
        case 5: return 31;  // May
        case 6: return 30;  // June
        case 7: return 31;  // July
        case 8: return 31;  // August
        case 9: return 30;  // September
        case 10: return 31; // October
        case 11: return 30; // November
        case 12: return 31; // December
        default: return 0;
    }
}

int daysUpToDate(int day , int month , int year)
{
    int totalDays = 0 ;

    for(int m = 1 ; m < month ; m++)
    {
        totalDays = totalDays + daysInMonth(m, year);
    }
    totalDays += day ;

    return totalDays;
}

int main()
{
    Date d1 , d2  , result ;
    printf("input dates in order(day month year)");
    scanf("%d %d %d" , &d1.day , &d1.month , &d1.year);
    printf("input dates in order(day month year)");
    scanf("%d %d %d" , &d2.day , &d2.month , &d2.year);

    int day1 = d1.year*365 + daysUpToDate(d1.day , d1.month , d1.year);
    int day2= d2.year*365 + daysUpToDate(d2.day , d2.month , d2.year);


    printf("%d" ,  ( day2 > day1) ? (day2- day1) : (day1 - day2)  );
    return (day2 - day1) ;
}
