#include <iostream>
using namespace std;

int main() {
    int pracArray[3];
    for(int i = 0;i < 3;i++){
        pracArray[i] = (i*2);
        cout << "Array position " << i << " is " << pracArray[i] << endl;
    }
    return 0;
}