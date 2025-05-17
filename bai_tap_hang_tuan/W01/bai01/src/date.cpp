#include <iostream>
#include "date.h"
using namespace std; 

Date::Date(int d, int m, int y)
{
    day = d; 
    month = m;
    year = year;
}

void Date::input()
{
    int day, month, year; 
    cout << "Nhap ngay thang nam: ";
    cin >> day >> month >> year; 
    this->day = day; 
    this->month = month; 
    this->year = year; 
}

void Date::output()
{
    cout << day << "/" << month << "/" << year << endl;
}

void Date::increase1Days()
{
    if (year % 4 == 0 && year % 100 != 0)
    {
        if(month == 1 || month == 3 || month == 5
        || month == 7 || month == 8 || month == 10
        || month == 12 )
        {
            if(day < 31)
                day++;
            else if(day >= 31 && month < 12)
            {
                day = 1; 
                month ++; 
            }
            else 
            {
                year++; 
            }
        }
        if(month == 4 || month == 6 || month == 9 || month == 11)
        {
            if(day < 30)
                day++;
            else if(day >= 30)
            {
                day = 1; 
                month++;
            }
        }
        else 
        {
            if(day < 29)
                day++; 
            else
            {
                day = 1; 
                month++; 
            }
        }
    }
    else 
    {
        if(month == 1 || month == 3 || month == 5
        || month == 7 || month == 8 || month == 10
        || month == 12 )
        {
            if(day < 31)
                day++;
            else if(day >= 31 && month < 12)
            {
                day = 1; 
                month ++; 
            }
            else 
            {
                year++; 
            }
        }
        if(month == 4 || month == 6 || month == 9 || month == 11)
        {
            if(day < 30)
                day++;
            else if(day >= 30)
            {
                day = 1; 
                month++;
            }
        }
        else 
        {
            if(day < 28)
                day++; 
            else
            {
                day = 1; 
                month++; 
            }
        }
    }
}

void Date::decrease1Days()
{
    if(year % 4 == 0 && year % 100 != 0)
    {
        if(day > 1)
            day--; 
        else
        {
            if(month == 1)
            {
                day = 31; 
                month = 12; 
                year--; 
            }
            if(month == 3)
            {
                day = 29; 
                month = 2; 
            }
            else if(month == 2 || month == 4 || month == 6 
            || month ==8 || month == 9 || month == 11)
            {
                day = 31; 
                month--; 
            }
            else
            {
                day = 30; 
                month--; 
            }
        }
    }
}