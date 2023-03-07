#include <iostream>
using namespace std;

int main() {
    int x,y,z;
    int _num1 = 20; // do you know that a variable name can start with underscore
    _num1 = 100; // assigning a new value to the same variable will overwrite the previous value
    
    double decimalNum = 48.9;
    char letter;
    letter = 'a';
    string myWord = "mustapha";
    bool check = true;
    //cout<< num1<< endl<<decimalNum<<endl<<letter<<endl<<myWord<<endl<<check;



    double sum = decimalNum + 10;
    int total = decimalNum + 10;
    // cout<<sum<<endl;

    const int num2 = 30;
    //cout<< num2;

    x=1;
    y=2;
    z=3;

    //cout<<x<<endl<<z;

    int ca = 1, cb = 2, cc = 3;
    cout<<cb;
    return 0;
}