#include <string>

bool checkOnesSegment(std::string s) 
{
    return s.find("01") == std::string::npos;
}
