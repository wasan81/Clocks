#pragma once
#include <string>
using namespace std;

class Clock
{
	public:
		Clock();
		Clock(int, int, int);
		void addHour();				//AddOneHour
		void addSecond();			//AddOneSecond
		void addMinute();			//AddOneMinute
		string get12HourFormat();	//FormatTime12
		string get24HourFormat();	//FormatTime24

	private:
		int hours;
		int minutes;
		int seconds;
		string pad(int);	//TwoDigitString
};

