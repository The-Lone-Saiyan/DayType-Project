#include <iostream>
#include <string>
#include "DayType.h"

using namespace std;

int NumDays;
string Next, Previous, Add, start, Day;

int main()
{
	cout << "What day is it? ";
	cin >> Day;
	DayType Day;

	Next = Day.NextDay();
	cout << Next << endl;

	Previous = Day.PreviousDay();
	cout << Previous << endl;

	cout << "\nHow many days are you adding? ";
	cin >> NumDays;
	Day.AddDays(NumDays);

	return 0;
}