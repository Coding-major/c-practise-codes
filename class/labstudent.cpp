#include <iostream>
#include <string>
using namespace std;

class student {
    private:
        string firstName;
        string lastName;
        int level;
        float CGPA;

    public:
        void setFirstName(string Fname);
        void setLastName(string Lname);
        void setLevel(int lev);
        void setCGPA(float cgpa);
        string getFirstName();
        string getLastName();
        int getLevel();
        float getCGPA();
};

// Mutators

void student::setFirstName(string Fname) {
    firstName = Fname;
}

void student::setLastName(string Lname) {
    lastName = Lname;
}

void student::setLevel(int lev) {
    level = lev;
}
void student::setCGPA(float cgpa) {
    CGPA = cgpa;
}

// Accessor

string student::getFirstName() {
    return firstName;
}

string student::getLastName() {
    return lastName;
}

int student::getLevel() {
    return level;
}
float student::getCGPA() {
    return CGPA;
}

void display(student currentStudent) {
    cout<<"first name is "<<currentStudent.getFirstName()<<endl;
    cout<<"last name is "<<currentStudent.getLastName()<<endl;
    cout<<"level is "<<currentStudent.getLevel()<<endl;
    cout<<"CGPA is "<<currentStudent.getCGPA()<<endl;
}


int main() {
    string firstName;
    string lastName;
    int level;
    float CGPA;
    student student1, student2;

    //first object
    cout<<"enter your first name: ";
    cin>>firstName;

    cout<<"enter your last name: ";
    cin>>lastName;

    cout<<"enter your level: ";
    cin>>level;

    cout<<"enter your CGPA: ";
    cin>>CGPA;

    student1.setFirstName(firstName);
    student1.setLastName(lastName);
    student1.setLevel(level);
    student1.setCGPA(CGPA);
    display(student1);

    //second object
    cout<<"enter your first name: ";
    cin>>firstName;

    cout<<"enter your last name: ";
    cin>>lastName;

    cout<<"enter your level: ";
    cin>>level;

    cout<<"enter your CGPA: ";
    cin>>CGPA;

    student2.setFirstName(firstName);
    student2.setLastName(lastName);
    student2.setLevel(level);
    student2.setCGPA(CGPA);
    display(student2);



}