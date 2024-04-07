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
    string CurrentDay;
    cin >> CurrentDay;

    if (CurrentDay == DayofWeek[0])
    {
        cout << "The next day of the week is " << DayofWeek[1] << endl;
    }
    
    if (CurrentDay == DayofWeek[1])
    {
        cout << "The next day of the week is " << DayofWeek[2] << endl;
    }

    if (CurrentDay == DayofWeek[2])
    {
        cout << "The next day of the week is " << DayofWeek[3] << endl;
    }

    if (CurrentDay == DayofWeek[3])
    {
        cout << "The next day of the week is " << DayofWeek[4] << endl;
    }

    if (CurrentDay == DayofWeek[4])
    {
        cout << "The next day of the week is " << DayofWeek[5] << endl;
    }

    if (CurrentDay == DayofWeek[5])
    {
        cout << "The next day of the week is " << DayofWeek[6] << endl;
    }

    if (CurrentDay == DayofWeek[6])
    {
        cout << "The next day of the week is " << DayofWeek[0] << endl;
    }

    else if(CurrentDay != DayofWeek[0, 1, 2, 3, 4, 5, 6])
    {
        cout << "Invalid entry.";
    }

    return Day;
}

string DayType::PreviousDay()
{
    string CurrentDay;

    if (CurrentDay == DayofWeek[0])
    {
        cout << "The previous day of the week is " << DayofWeek[6] << endl;
    }

    if (CurrentDay == DayofWeek[1])
    {
        cout << "The previous day of the week is " << DayofWeek[0] << endl;
    }

    if (CurrentDay == DayofWeek[2])
    {
        cout << "The previous day of the week is " << DayofWeek[1] << endl;
    }

    if (CurrentDay == DayofWeek[3])
    {
        cout << "The previous day of the week is " << DayofWeek[2] << endl;
    }

    if (CurrentDay == DayofWeek[4])
    {
        cout << "The previous day of the week is " << DayofWeek[3] << endl;
    }

    if (CurrentDay == DayofWeek[5])
    {
        cout << "The previous day of the week is " << DayofWeek[4] << endl;
    }

    if (CurrentDay == DayofWeek[6])
    {
        cout << "The previous day of the week is " << DayofWeek[5] << endl;
    }

    else if (CurrentDay != DayofWeek[0, 1, 2, 3, 4, 5, 6])
    {
        cout << "Invalid entry.";
    }

    return Day;
}

void DayType::AddDays(int NumDays)
{

}

void DayType::Print() const
{
    cout << Day << endl;
}

DayType::DayType(string start)
{
    SetDay(start);
}
