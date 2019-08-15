#include <iostream>
#include <fstream>
#include <string>
#include <regex>
#include <queue>
#include "hashtable.cpp"

using namespace std;

int main() {
    string pracArray[100];
    string currline;
    hashtable<int,string> test;
    queue <string> wordholder;

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
            test.insertNode(test.hashCode(i),wordholder.front());
            wordholder.pop();
        }
        test.display();
    }

    else cout << "Unable to open file";
    return 0;
}