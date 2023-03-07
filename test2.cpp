#include <iostream>
using namespace std;

int main() {
    int num1, num2, added, i, j, p, y;
    cout<<"enter the first number: ";
    cin>>num1;

    cout<<"enter the second number: ";
    cin>>num2;

    if (num1 >= num2) {
        cout<<"first number must be less than the second number"<<endl;

    } else {
        if (num1%2 == 0) {
            for (i = num1+1; i<num2; i+=2) {
                cout<<i<<endl<<endl;
            }

            added = 0;
            for (j = num1+2; j<num2; j+=2) {
                added += j;
            }
            cout<<"";
            cout<<"the total even number is: "<<added;
        } else {
            for (p = num1+2; p<num2; p+=2) {
                cout<<p<<endl;
            }

            added = 0;
            for (y = num1+1; y<num2; y+=2) {
                added += y;
            }
            cout<<"";
            cout<<"the total even number is: "<<added;
        }
    }

    return 0;
}