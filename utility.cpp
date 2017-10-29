#include "utility.h"

void printMessage(const char* message, bool newline )
{
    if(newline) {
        std::cout << message << std::endl;
    } else {
        std::cout << message ;
    }
}

void printMessage(const std::string& message, bool newline )
{
    if(newline) {
        std::cout << message << std::endl;
    } else {
        std::cout << message ;
    }	
}