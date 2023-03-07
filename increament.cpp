#include <iostream>
using namespace std;

int main() {
    int a = 5, b=10, c=4, d=12;
    int m = b++-++a+c++;
    cout<<m;
}