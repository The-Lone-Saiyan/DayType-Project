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
        cout << "Tomorrow is " << DayofWeek[1] << endl;
        cout << "Yesterday was " << DayofWeek[6] << endl;

        return Day;
    }
    
    if (CurrentDay == DayofWeek[1])
    {
        cout << "Tomorrow is " << DayofWeek[2] << endl;
        cout << "Yesterday was " << DayofWeek[0] << endl;

        return Day;
    }

    if (CurrentDay == DayofWeek[2])
    {
        cout << "Tomorrow is " << DayofWeek[3] << endl;
        cout << "Yesterday was " << DayofWeek[1] << endl;

        return Day;
    }

    if (CurrentDay == DayofWeek[3])
    {
        cout << "Tomorrow is " << DayofWeek[4] << endl;
        cout << "Yesterday was " << DayofWeek[2] << endl;

        return Day;
    }

    if (CurrentDay == DayofWeek[4])
    {
        cout << "Tomorrow is " << DayofWeek[5] << endl;
        cout << "Yesterday was " << DayofWeek[3] << endl;

        return Day;
    }

    if (CurrentDay == DayofWeek[5])
    {
        cout << "Tomorrow is " << DayofWeek[6] << endl;
        cout << "Yesterday was " << DayofWeek[4] << endl;

        return Day;
    }

    if (CurrentDay == DayofWeek[6])
    {
        cout << "Tomorrow is " << DayofWeek[0] << endl;
        cout << "Yesterday was " << DayofWeek[5] << endl;

        return Day;
    }

    else
    {
        cout << "Invalid entry.";
    }
}

string DayType::PreviousDay()
{
    string CurrentDay;

    if (CurrentDay == DayofWeek[0])
    {
        cout << "The previous day of the week is " << DayofWeek[6] << endl;

        return Day;
    }

    if (CurrentDay == DayofWeek[1])
    {
        cout << "The previous day of the week is " << DayofWeek[0] << endl;

        return Day;
    }

    if (CurrentDay == DayofWeek[2])
    {
        cout << "The previous day of the week is " << DayofWeek[1] << endl;

        return Day;
    }

    if (CurrentDay == DayofWeek[3])
    {
        cout << "The previous day of the week is " << DayofWeek[2] << endl;

        return Day;
    }

    if (CurrentDay == DayofWeek[4])
    {
        cout << "The previous day of the week is " << DayofWeek[3] << endl;

        return Day;
    }

    if (CurrentDay == DayofWeek[5])
    {
        cout << "The previous day of the week is " << DayofWeek[4] << endl;

        return Day;
    }

    if (CurrentDay == DayofWeek[6])
    {
        cout << "The previous day of the week is " << DayofWeek[5] << endl;

        return Day;
    }
}

void DayType::AddDays(int NumDays)
{
    int Index = 0;
    int NewIndex;

    NewIndex = (Index + NumDays) % 7;

    cout << "How many days are you adding? ";
    cin >> NumDays;
    cout << NewIndex;
}

void DayType::Print() const
{
    cout << Day << endl;
}

DayType::DayType(string start)
{
    SetDay(start);
}
