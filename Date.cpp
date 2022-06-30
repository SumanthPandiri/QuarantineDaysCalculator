//Date.cpp: function definitions for Date class functions

#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

//Function definition for the constructor with arguments
Date::Date(int m, int d, int y) : month{m}, day{d}, year{y} {
    //This is to validate month input
    if (m > 0 && m < 13) {
        month = m;
    }
    else {
        month = 1;
    }
    
    //Validating day input based on the number of days in each month
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        if (d > 0 && d < 32) {
            day = d;
        }
        else {
            day = 1;
        }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        if (d > 0 && d < 31) {
            day = d;
        }
        else {
            day = 1;
        }
    } 
    else if (month == 2) {
        if (d > 0 && d < 29) {
            day = d;
        }
        else {
            day = 1;
        }
    }

    //This is to validate year input
    if (y == 2021 || y == 2022) {
        year = y;
    }
    else {
        year = 2021;
    }
    }

//Function definition for setting month function
bool Date::setMonth(int m) 
{
    //Validating month input
    if (m > 0 && m < 13) {
        month = m;
        return true;
    }
    else {
        return false;
    }

}
//Function definition for setting day function
bool Date::setDay(int d) 
{
    //Validating day input based on the number of days in each month
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        if (d > 0 && d < 32) {
            day = d;
            return true;
        }
        else {
            return false;
        }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        if (d > 0 && d < 31) {
            day = d;
            return true;
        }
        else {
            return false;
        }   
    } 
    else if (month == 2) {
        if (d > 0 && d < 29) {
            day = d;
            return true;
        }
        else {
            return false;
        }
    }
    else {
        return false;
    }
}

//Function definition for setting year function
bool Date::setYear(int y) 
{
    //Validating year input
    if (y == 2021 || y == 2022) {
        year = y;
        return true;
    }
    else {
        return false;
    }
}

//Function definition for getting month function
int Date::getMonth()
{
    return month;
}

//Function definition for getting day function
int Date::getDay()
{
    return day;
}

//Function definition for getting year function
int Date::getYear()
{
    return year;
}

//Function definition for returning the date instance as a string 
string Date::showDate()
{
    string o;

    //Adding a 0 to the beginning if the month or day is less than 10
    if (month < 10) {
        if (day < 10) {
            o = "0" + to_string(month) + "/" + "0" + to_string(day) + "/" + to_string(year);
        }
        else 
        {
            o = "0" + to_string(month) + "/" + to_string(day) + "/" + to_string(year);
        }
        
    }
    else {
        o = to_string(month) + "/" + to_string(day) + "/" + to_string(year);
        }
        return o;
}