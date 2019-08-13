#include <iostream>
#include <fstream>
#include <string>
#include <regex>
#include <queue>
#include "hashtable.h"

using namespace std;

int main() {
    string pracArray[100];
    string currline;
    hashtable test;

    queue <string> wordholder;

    test.setTest(2);
    cout << test.getTest();

    ifstream testfile ("test.txt");
    if (testfile.is_open())
    {
        while (getline(testfile,currline,' '))
        {
            wordholder.push(currline);
            //cout << currline << "\n";
        }
        testfile.close();

        int qsize = wordholder.size();

        for(int i = 0;i<qsize;i++){
            cout << wordholder.front() << "\n";
            wordholder.pop();
        }
    }

    else cout << "Unable to open file";
    return 0;
}