#include <iostream>
#include <fstream>
#include <string>
#include <vector>

// authors: Sarah Gregory and __, date revised: 9/__/2021
// This program creates a String class.
//
// To compile this program:  g++ String.cpp -o 

using std::string;
struct String{
    string value;

    //constructors:
    String(){
        value="";
    }
    String(const String& other){
        this->value = other.value;
    }
    String(const char* cString){
        
    }
    //destructor
    ~String(){
    }

    //methods
    string toString(){

    }
    int length(){

    }
    String substring(int start, int end){

    }

    //operators
    bool operator==(const String& other){
        if (this->value == other.value) return true;
        return false;
    }
    String& operator=(const String& other){
        ;
    }
    String& operator+=(const String& other){
        ;
    }

};