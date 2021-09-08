/*
Names: Ioana-Andreea Cristescu and Sarah Gregory
Course: CMSC 240
Professor: Dr. Szajda
Due date: 09/08/2021
Project Description: This program has a String class that mimics some functionality from the String class 
in Java. The functionality of the methods match the functionality provided by the String class in Java, as 
much as possible.
Documentation: 
     - Java API - for remembering what each of the required method does
     - C++ Reference - string class, invalid_argument class
     - Mamnuya Rinki: discussed the out_of_range exception               
*/

#include <iostream>
#include <string>
#include <exception>
#include "String.h"
using namespace std;

// Default constructor - if no arguments are provided 
// Initializes a newly created String object so that it represents an empty character sequence
String::String()
{
    this->value = "";
}

// Copy constructor - the newly created String is a copy of the argument String
String::String(const String &other)
{
    this->value = other.value;
}

// Constructor used in case the argument provided is of type char*
// Allocates a new String so that it represents the sequence of characters currently contained in the char* argument
String::String(const char* cString)
{
    // If the argument is not equal to nullptr, then the value is copied
    if (cString != nullptr) 
    {
        this->value = cString;
    }
    // If the argument is equal to nullptr, then an exception is thrown
    else    
    {
        throw invalid_argument("The const char* argument of the constructor cannot be nullptr");
    }
       
}

// Deconstructor
String::~String()
{}

// The value of the String is returned as type C++ string 
string String::toString()
{
    return this->value;
}

// Returns the lenght of the String
int String::length()
{
    return this->value.length();
}

// Returns a new String that is a substring of the given String.
// The parameter 'start' is incluside and the parameter 'end' is exclusive for the begining and end of the substring
String String::substring(int start, int end)
{
    String newString;

    // In case at least one of the parameters is out of bounds, an error is thrown and an empty String is returned
    try
    {
        if (start > end or start < 0 or end > this->value.size())
        {
            string msg = "Invalid arguments to substring: [" + to_string(start) +"," + to_string(end) + "]";
            throw out_of_range(msg.c_str());
        }
    }
    catch(const exception& e)
    {
        std::cerr << e.what() << '\n';
        return newString;
    }

    // In case the indices 'start' and 'end' are in bounds the new String takes the value of the substring
    for (int i = start; i < end; i++)    
    {
        newString.value = newString.value + this->value[i];
    }   
        
    return newString;   
}

// Overloading the '==' operator
// Returns true if the value of the arguments equal the value of the String, returns false otherwise
bool String::operator==(const String& other)
{
	if (this->value==other.value) return(true);
	return(false);
}

// Overloading the '=' operator
// Assigns a new value to the String, replacing its current contents
String& String::operator=(const String& other)
{
    this->value = other.value;
    return *this;
}

// Overloading the '+=' operator
// Extends the String by appending additional characters at the end of its current value
String& String::operator+=(const String& other)
{
    this->value += other.value;
    return *this;
}