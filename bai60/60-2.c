#include <string.h>
#include <sstream>
#include <string>

using namespace std;
int main()
{
    int number = 123;
    string result;
    ostringstream convert;
    convert << number;
    result = convert.str(); 
    cout << result;
}