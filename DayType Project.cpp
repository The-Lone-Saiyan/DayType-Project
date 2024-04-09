#include <iostream>
#include <string>
#include "DayType.h"

using namespace std;

int NumDays;
string Next, Previous, Add;

int main()
{
	
	DayType Day;

	Next = Day.NextDay();
	cout << Next << endl;

	Previous = Day.PreviousDay();
	cout << Previous << endl;

	Day.AddDays(NumDays);
	cout << Add << endl;
}