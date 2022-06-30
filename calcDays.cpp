//calcDays.cpp
//Function definition for calcdays

#include "calcDays.h"

int calcDays (Date date1, Date date2)
{

    //Variable initializations
    int daysDiff1 = 0;
    int daysDiff2 = 0;
    int month1 = 1;
    int day1 = 1;
    int year1 = 2021;
    int month2 = 1;
    int day2 = 1;
    int year2 = 2021;
    
    //Assigning dates to the variables
    month1 = date1.getMonth();
    day1 = date1.getDay();
    year1 = date1.getYear();
    month2 = date2.getMonth();
    day2 = date2.getDay();
    year2 = date2.getYear();

    //Adding the day to total days
    daysDiff1 = day1;
    daysDiff2 = day2;

    //Adding days of past months to total days
    if (month1 > 1) 
    {
        daysDiff1 = daysDiff1 + 31;
    }
    if (month1 > 2)
    {
        daysDiff1 = daysDiff1 + 28;
    }
    if (month1 > 3) 
    {
        daysDiff1 = daysDiff1 + 31;
    }
    if (month1 > 4)
    {
        daysDiff1 = daysDiff1 + 30;
    }
    if (month1 > 5)
    {
        daysDiff1 = daysDiff1 + 31;
    }
    if (month1 > 6) 
    {
        daysDiff1 = daysDiff1 + 30;
    }
    if (month1 > 7)
    {
        daysDiff1 = daysDiff1 + 31;
    }
    if (month1 > 8) 
    {
        daysDiff1 = daysDiff1 + 31;
    }
    if (month1 > 9)
    {
        daysDiff1 = daysDiff1 + 30;
    }
    if (month1 > 10) 
    {
        daysDiff1 = daysDiff1 + 31;
    }
    if (month1 > 11)
    {
        daysDiff1 = daysDiff1 + 30;
    }

    //Adding days of past year to total days
    if (year1 == 2022) 
    {
        daysDiff1 = daysDiff1 + 365;
    }

    //Adding days of past months to total days
    if (month2 > 1) 
    {
        daysDiff2 = daysDiff2 + 31;
    }
    if (month2 > 2)
    {
        daysDiff2 = daysDiff2 + 28;
    }
    if (month2 > 3) 
    {
        daysDiff2 = daysDiff2 + 31;
    }
    if (month2 > 4)
    {
        daysDiff2 = daysDiff2 + 30;
    }
    if (month2 > 5)
    {
        daysDiff2 = daysDiff2 + 31;
    }
    if (month2 > 6) 
    {
        daysDiff2 = daysDiff2 + 30;
    }
    if (month2 > 7)
    {
        daysDiff2 = daysDiff2 + 31;
    }
    if (month2 > 8) 
    {
        daysDiff2 = daysDiff2 + 31;
    }
    if (month2 > 9)
    {
        daysDiff2 = daysDiff2 + 30;
    }
    if (month2 > 10) 
    {
        daysDiff2 = daysDiff2 + 31;
    }
    if (month2 > 11)
    {
        daysDiff2 = daysDiff2 + 30;
    }

    //Adding days of past year to total days
    if (year2 == 2022) 
    {
        daysDiff2 = daysDiff2 + 365;
    }

    //Returning the difference in days
    return (daysDiff1 - daysDiff2);
}