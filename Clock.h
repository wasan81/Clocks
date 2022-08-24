#pragma once
#include <string>
using namespace std;

class Clock
{
	public:
		Clock();
		Clock(int, int, int);
		void addHour();				//Same as addOneHour
		void addSecond();			//Same as addOneSecond
		void addMinute();			//Same as addOneMinute
		string get12HourFormat();	//Same as formatTime12
		string get24HourFormat();	//Same as formatTime24

	private:
		int hours;
		int minutes;
		int seconds;
		string pad(int);	//Same as twoDigitString
};

