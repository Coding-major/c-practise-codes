#include <iostream>
#include <string>
using namespace std;

// void myStatement(string name) {
//     cout<<"my name is "<<name;
// }

// void whatILove(string quran = "zumar"){
//     cout<<"i love reciting "<< quran<<" alone"<<endl;
// }

void arrfunction();

int main() {
    // myStatement("mustapha");
    // whatILove();
    // whatILove("it");

    arrfunction();
    arrfunction();
    return 0;
}

void arrfunction(int arr[]) {
    arr[3] = {1,2,3};
    cout<<arr[2];
}

