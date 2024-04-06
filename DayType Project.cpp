#include <iostream>
#include <string>
#include "DayType.h"

using namespace std;

int main()
{

	for (int i = 0; i < 7; i++)
		cout << DayType::DayofWeek[i] << " ";
	cout << endl;

	DayType::DayofWeek[0] = "Sun";
	DayType::DayofWeek[1] = "Mon";
	DayType::DayofWeek[2] = "Tue";
	DayType::DayofWeek[3] = "Wed";
	DayType::DayofWeek[4] = "Thu";
	DayType::DayofWeek[5] = "Fri";
	DayType::DayofWeek[6] = "Sat";

	for (int i = 0; i < 7; i++)
		cout << DayType::DayofWeek[i] << " ";
	cout << endl;

	cin >> DayofWeek[i];


	DayType Day;
	Day.Print();
}