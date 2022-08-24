#include "Clock.h"

Clock::Clock() {
    hours = 0;
    minutes = 0;
    seconds = 0;

}
Clock::Clock(int hours, int minutes, int seconds) {
    this->hours = hours;
    this->minutes = minutes;
    this->seconds = seconds;
}

void Clock::addHour() {     //AddHour
    if (hours == 23) {
        hours = 0;
    }
    else {
        hours += 1;
    }
}

void Clock::addMinute() {   //AddMinute
    if (minutes == 59) {
        minutes = 0;
        addHour();
    }
    else{
        minutes += 1;
    }
}

void Clock::addSecond() {    //AddSecond
    if (seconds == 59) {
        seconds = 0;
        addMinute();
    }
    else {
        seconds += 1;
    }
}

string Clock::get24HourFormat() {    //Get24HourFormat
    string time;
    
    time = pad(hours) + ":" + pad(minutes) + ":" + pad(seconds);
    return time;
}
string Clock::get12HourFormat() {     //Get12HourFormat

    string time;
    string suffix = "AM";
    int currentTime = hours;
    if (currentTime > 12) {
        currentTime -= 12;
       suffix = "PM";
    }
    else if (currentTime == 0  ) {
        currentTime = 12;
        
    }
    else if (currentTime == 12) {
        suffix = "PM";
    }
     time = to_string(currentTime) + ":" + pad(minutes) + ":" + pad(seconds) +" "+ suffix;
    return time;
}
string Clock::pad(int num)     //Pad
{
    string padnum;


    if (num < 10) {

        padnum = "0" + to_string(num);

    }
    else {
        padnum = to_string(num);
    }
    return padnum;
}
