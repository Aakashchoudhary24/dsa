#include <iostream>
#include <string>
using namespace std;

int main(){
    string myname;

    cout << "Enter your name : ";
    getline(cin, myname);

    cout << "Hello, " << myname << "." << endl;
}

// include : a preprocessor directive : instructs the preprocessor to insert the entire content
// of the file specified into the source code where the #include line is mentioned
// the above process occurs before compilation phase
// iostream : a header that defines the input/output stream objects : input/output stream library
// objects : cin, cout, cerr, clog, wcin, wcout, wcerr, wclog : (wc : wide character)
// using endl so that program goes to next line
// getline() function : extracts characters and stores them into str until the delim character is found or the newline character \n is found.
