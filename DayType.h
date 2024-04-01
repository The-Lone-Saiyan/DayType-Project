#pragma once
#include <string>

using namespace std;

class DayType
{
public:

	//Pre-Condition: A valid day is supplied.
	//Post-Condtion: Stores day if valid, otherwise stores default.
	void SetDay(string);

	//Post-Condition: Returns value of day.
	string GetDay() { return Day; }

	//Post-Condition: Displays the value of day.
	void Print() const;

	//Returns the value of the day after.
	string NextDay();

	//Returns the value of the day before.
	string PreviousDay();

	//Pre-Condition: NumDays must be a postive integer.
	//Post-Condition: Sets day to a day in the future.
	void AddDays(int NumDays);

	//Constructor
	DayType(string DayofWeek[0]);

private:

	string Day;
	static string DayofWeek[7];


};

