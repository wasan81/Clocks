/* 
Wasan Alabed
CS210
july 16,2022

*/
#include <iostream>
#include <string>
#include "Clock.h"
#include "ValidationUtils.h"

using namespace std;
//TODO implement printMenu
void printMenu() {
    cout << "*******************************" << endl;
    cout << "*   1- Add One Hour          * " << endl;
    cout << "*   2- Add One Minute        *" << endl;
    cout << "*   3- Add One Second        *" << endl;
    cout << "*   4- Exit Program          *" << endl;
    cout << "*******************************"<< endl;
    cout << "Enter Selection" << endl;
}
//TODO implement printClock
void printClock(Clock clock) {

    cout << "*******************************" << endl;
    cout << "*  12 Hours Clock  " << clock.get12HourFormat() << endl;
    cout << "   24 Hours Clock   " << clock.get24HourFormat() << endl;

}
//Declare constants for menu choices
int main() {                        
    const int ADD_ONE_HOUR_MENUE_CHOICE =  1;
    const int ADD_ONE_HOUR_MENUE_CHOICE2 = 2;
    const int ADD_ONE_HOUR_MENUE_CHOICE3 = 3;
    Clock clock;                              //TODO create instance of Clock, with default constructor
    ValidationUtils validationUtils(1,4);     //TODO create instance of ValidationUtils with parameterized constructor

    
    //Get user input
    int userSelection;             
    //Do-while loop (condition is user has not entered the value for exiting the program
   do  {
       printClock(clock);     //print clock
       printMenu();           //print menu
      
       //while user input is not valid...use validationUtils
       cin >> userSelection;
       while (validationUtils.validateMenuChoice(userSelection) == false) {
           //print error message
           cout << "Please Enter valid selection from  " << validationUtils.getMinValue() << " to " << validationUtils.getMaxValue() <<"."<< endl;
           //print the valid range...use validationUtils
           validationUtils.getMaxValue();
           validationUtils.getMinValue();
           cout << "Enter you selsction" << endl;
           cin >> userSelection;       //get input
       
       }
       //Decision structure to handle user selections
           if (userSelection == ADD_ONE_HOUR_MENUE_CHOICE) {
               clock.addHour();

           }
           if (userSelection == ADD_ONE_HOUR_MENUE_CHOICE2) {
               clock.addMinute();
           }
           if (userSelection == ADD_ONE_HOUR_MENUE_CHOICE3) {
               clock.addSecond();
           }

       } while (userSelection != 4);
    return 0;
}

    




 


