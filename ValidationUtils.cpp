#include "ValidationUtils.h"

ValidationUtils::ValidationUtils(int min, int max) {
    this->min = min;
    this->max = max;
}
//TODO validateMenuChoice
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

//TODO getMinValue
int ValidationUtils::getMaxValue() 
{
    return max;
}

//TODO Implement getMinValue
int ValidationUtils::getMinValue()
{
   return min;
}