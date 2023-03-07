#include <iostream>
#include <string>
using namespace std;

struct nameType {
    string firstName;
    string secondName;
    string  surname;
};

struct addressType {
    int houseNumber;
    int po_box;
    string street;
    string local_government;
    string state;
    string country;
};

struct gradeType {
    float first_semester;
    float second_semester;
};

struct personal_detailsType {
    string phone_number;
    string height;
    string weight;
    string email;
};

struct student_recordType {
    nameType name;
    addressType address;
    gradeType grade;
    personal_detailsType personal_details;
    string about;
};

int main() {
    student_recordType student1;

    student1 = {}

    cout<<student1.name.firstName;
}