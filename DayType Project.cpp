#include <iostream>
#include <string>
#include "DayType.h"

using namespace std;

int NumDays;
string Next, Previous;

int main()
{
	
	DayType Day;
	//Day.Print();
	Next = Day.NextDay();
	cout << Next << endl;
	Previous = Day.PreviousDay();
	cout << Previous << endl;
	Day.AddDays(NumDays);
}