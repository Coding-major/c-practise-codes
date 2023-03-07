#include <iostream>
#include <string>
using namespace std;

struct schoolfile {
    string firstName;
    string secondName;
    string surname;
};

int main() {
    int i;
    schoolfile list[4];

    for (i=0; i<4; i++) {
        cout<<"enter the first name of number "<<i+1<<" file: ";
        cin>>list[i].firstName;
        cout<<"enter the second name of number "<<i+1<<" file: ";
        cin>>list[i].secondName;
        cout<<"enter the surname of number "<<i+1<<" file: ";
        cin>>list[i].surname;
    }

    for (i=0; i<4; i++) {
        cout<<list[i].surname<<" "<<list[i].firstName<<" "<<list[i].secondName<<endl;
    }
}