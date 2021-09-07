#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

// authors: Ioana Cristescu and Sarah Gregory, date revised: 9/7/2021
// This program creates a String class.
//
// To compile this program:  g++ String.cpp -o

struct String{
    string value;

    //constructors:
    String(){ //default
        this->value="";
    }
    String(const String& other){
        this->value = other.value;
    }
    String(const char* cString){ //converts a c-style string to a String
        int size = strlen(cString);
            for (int i = 0; i < size; i++) {
                this->value = this->value + cString[i];
            }
    }
    //destructor
    ~String(){}

    //methods
    string toString(){
        return this->value;
    }
    int length(){
        return this->value.size();
    }
    String substring(int start, int end){

    }

    //operators
    bool operator==(const String& other){
        if (this->value == other.value) return true;
        return false;
    }
    String& operator=(const String& other){
        this->value = other.value;
    }
    String& operator+=(const String& other){
        this->value = this->value+other.value;
    }
};