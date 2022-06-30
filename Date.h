//Date.H: class declaration and class function prototype file
#ifndef DATE_H_
#define DATE_H_

#include <iostream>
#include <string> 
#include <cctype>
using namespace std;

class Date
{
private:
    int month {1};
    int day {1};
    int year {2021};

public:
    Date() = default;
    Date(int m, int d, int y);
    
    bool setMonth(int m);
    bool setDay(int d);
    bool setYear(int y);
    int getMonth();
    int getDay();
    int getYear();
    string showDate();
    
};


#endif 