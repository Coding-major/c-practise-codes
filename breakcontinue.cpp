#include <iostream>
using namespace std;

int main() {
    int num1 = 1;
    while (num1 <= 10) {
        cout<<num1<<endl;
        num1++;

        if (num1 == 5) {
            continue;
        }
        
    }
}