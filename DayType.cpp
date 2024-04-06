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

    void DayType::Print() const
    {
        cout << Day << endl;
    }

    DayType::DayType(string start)
    {
        SetDay(start);
    }
