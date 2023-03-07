#include <iostream>
#include <string>
using namespace std;

int main() {
    int num1, num2, sum, difference, multiple, division, modulo;
    string sign;

    cout<<"input the first number: ";
    cin>>num1;

    cout<<"input the second number: ";
    cin>>num2;

    cout<<"input the operator: ";
    cin>>sign;

    sum = num1 + num2;
    difference = num1 - num2;
    multiple = num1 * num2;
    division = num1 / num2;
    modulo = num1 % num2;


    if (sign == "+") {
        cout<<num1<<" + "<<num2<<" = "<<sum<<endl;
    } else if (sign == "-") {
        cout<<num1<<" - "<<num2<<" = "<<difference<<endl;
    } else if (sign == "*" ) {
        cout<<num1<<" * "<<num2<<" = "<<multiple<<endl;
    } else if (sign == "/") {
        cout<<num1<<" / "<<num2<<" = "<<division<<endl;
    } else if (sign == "%") {
        cout<<num1<<" % "<<num2<<" = "<<modulo<<endl;
    }
}

