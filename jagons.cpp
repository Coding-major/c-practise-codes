#include <iostream>
#include <string>
using namespace std;

struct nameType {
    string firstName;
    string secondName;
    string  surname;
};

struct student_recordType {
    int number;
    nameType name;
    string about;
};


int main() {
    student_recordType student10;

    student10 = {10 ,{"mustapha", "muhammad", "shehu"}, "i am a good man"};
    cout<<student10.name.firstName<<endl;
    return 0;
}