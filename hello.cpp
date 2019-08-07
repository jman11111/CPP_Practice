#include <iostream>
#include <fstream>
#include <string>
#include <regex>

using namespace std;

int main() {
    string pracArray[100];
    string currline;
    ifstream testfile ("test.txt");
    if (testfile.is_open())
    {
        while (getline(testfile,currline))
        {
            
        }
        testfile.close();
    }

    else cout << "Unable to open file";
    return 0;
}