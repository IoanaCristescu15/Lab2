#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct String
{
    string value;

    String()
    {
        this->value = "";
    }

    String(const String &other)
    {
        this->value = other.value;
    }

    String(const char* cString)
    {
        //if (cString != '\0') 
        //{
            int size = strlen(cString);
            for (int i = 0; i < size; i++)    
            {
                this->value = this->value + cString[i];
            }   
        //}
       
    }

    ~String()
    {}

    string toString()
    {
        return this->value;
    }

    int length()
    {
        return this->value.size();
    }
};

int main()
{

/*try {
    String str0(nullptr);
}
catch (exception& e)
{
    cout << "aha!" << endl;
}*/
    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << endl << "Testing default constructor:" << endl;
    cout         << "----------------------------" << endl;
    
    cout << "String str1;" << endl;
    String str1;

    cout << "\tLength: "   << str1.length() << " [0]" << endl;
    cout << "\ttoString: \"" << str1.toString() << "\" [\"\"]" << endl << endl;

    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++" << endl;

    cout << endl << "Testing const char* constructor:" << endl;
    cout         << "--------------------------------" << endl;
    
    cout << "String str2(\"Jeff Tweedy\");" << endl;
    String str2("Jeff Tweedy");

    cout << "\tLength: "   << str2.length()   << " [11]" << endl;
    cout << "\ttoString: \"" << str2.toString() << "\" [\"Jeff Tweedy\"]" 
        << endl << endl;

    cout << "String str2b(\"\");" << endl;
    String str2b("");

    //cout << "\tLength: "   << str2b.length()   << " [0]" << endl;
    cout << "\ttoString: \"" << str2b.toString() << "\" [\"\"]" 
        << endl << endl;

    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++" << endl;

    cout << endl << "Testing copy constructor:" << endl;
    cout         << "-------------------------" << endl;
    
    cout << "String str3(str2);" << endl;
    String str3(str2);

    //cout << "\tLength: "   << str3.length()   << " [11]" << endl;
    cout << "\ttoString: \"" << str3.toString() << "\" [\"Jeff Tweedy\"]" 
        << endl << endl;

    cout << "String str3b(str2b);" << endl;
    String str3b(str2b);

    //cout << "\tLength: "   << str3b.length()   << " [0]" << endl;
    cout << "\ttoString: \"" << str3b.toString() << "\" [\"\"]" 
        << endl << endl;

    return 0;

}
