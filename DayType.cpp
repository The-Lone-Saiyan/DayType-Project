#include <iostream>
#include "DayType.h"

using namespace std;

string DayType::DayofWeek[] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };

void DayType::SetDay(string aDay)
{
    int index = 0;
        for (int i = 0; i < 7; i++)
        {
            if (DayofWeek[i] == aDay)
            {
                index = i;
                break;
            }
        }
    Day = DayofWeek[index];
}

string DayType::NextDay()
{
    int NewIndex;
    int index = 0;

    cout << "\nTomorrow is ";

    for (int i = 0; i < 7; i++)
    {
        if (DayofWeek[i] == Day)
        {
            index = i;
            break;
        }
    }
        NewIndex = (index + 1);
        if (NewIndex > 6)
        {
            NewIndex = 0;
        }
    
        return DayofWeek[NewIndex];
    

}

string DayType::PreviousDay()
{
    int NewIndex;
    int index = 0;

    cout << "\nYesterday was ";

    for (int i = 0; i < 7; i++)
    {
        if (DayofWeek[i] == Day)
        {
            index = i;
            break;
        }
    }
        NewIndex = (index - 1);
        if (NewIndex < 0)
        {
            NewIndex = 6;
        }
        return DayofWeek[NewIndex];
    
}

void DayType::AddDays(int NumDays)
{
    int index = 0;
    int NewIndex;

    for (int i = 0; i < 7; i++)
    {
        if (DayofWeek[i] == Day)
        {
            index = i;
            break;
        }
    }
        NewIndex = (index + NumDays) % 7;
    
    cout << "\nIt will be " << DayofWeek[NewIndex] << " in " << NumDays << " days." << endl;
}

void DayType::Print() const
{
    cout << Day << endl;
}

DayType::DayType(string start)
{
    SetDay(start);
}
