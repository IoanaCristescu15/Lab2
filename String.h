#include <string>
using namespace std;

// authors: Ioana Cristescu and Sarah Gregory, date revised: 9/7/2021
// This program declares the headers of the String class.
//
// To compile this program:  g++ String.h -o

struct String{
    string value;

    //constructors:
    String();
    String(const String& other);
    String(const char* cString);
    ~String();

    //methods
    string toString();
    int length();
    String substring(int start, int end);

    //operators
    bool operator==(const String& other);
    String& operator=(const String& other);
    String& operator+=(const String& other);
};