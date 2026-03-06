#include <string>

bool checkOnesSegment(std::string s) 
{
    // If "01" is not found, string::find returns npos
    return s.find("01") == std::string::npos;
}
