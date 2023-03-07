#include <iostream>
#include <string>
using namespace std;

struct household
    {
        int no_of_people;
        string names;
        string males_no;
        string females_no;
        string houseStructure;
    };

void censors(household& ifo) {
    cout<<"enter no males in the house: ";
    cin>>ifo.males_no;
    cout<<"enter house structure: ";
    cin>>ifo.houseStructure;
    
}

// void myname(string name) {
//     cout<<"enter your name: ";
//     cin>>name;
//     cout<<"The best name for me is "<<name<<;
// }

int main() {

    
    // household babaIjk;
    // household mallamRash;
    household gidanHajiya;
    household gidanMu;

    // babaIjk.no_of_people = 25;

    // cout<<babaIjk.no_of_people;
    censors(gidanHajiya);
    gidanMu = gidanHajiya;
    cout<<gidanMu.houseStructure;
    return 0;
}