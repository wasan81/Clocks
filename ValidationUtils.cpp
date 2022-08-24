#include "ValidationUtils.h"

ValidationUtils::ValidationUtils(int min, int max) {
    this->min = min;
    this->max = max;
}
//ValidateMenuChoice
bool ValidationUtils::validateMenuChoice(int choice)
{
    bool isvalid;
    if (choice >= min && choice <= max) {
        isvalid = true;
    }
    else {
        isvalid = false;
    }return isvalid;
}

//GetMinValue
int ValidationUtils::getMaxValue() 
{
    return max;
}

//Implement getMinValue
int ValidationUtils::getMinValue()
{
   return min;
}
