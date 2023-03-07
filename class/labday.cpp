#include <iostream>
#include <string>
using namespace std;

class dayType {
    int dayNumber;

    public:
        string days[7] = {"sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday"};
        void setDay(string day) {
            if (day == "sun" || day == "Sun") {
                dayNumber = 0;
            } else if (day == "mon" || day == "Mon") {
                dayNumber = 1;
            } else if (day == "tue" || day == "Tue") {
                dayNumber = 2;
            } else if (day == "wed" || day == "Wed") {
                dayNumber = 3;
            } else if(day == "thur" || day == "Thur") {
                dayNumber = 4;
            } else if (day == "fri" || day == "Fri") {
                dayNumber = 5;
            } else if (day == "sat" || day == "Sat") {
                dayNumber = 6;
            }
        }
        void printDay() {
            cout<<days[dayNumber];
        }

        string returnDay() {
            return days[dayNumber];
        }

        string nextDay() {
            int nextDay = dayNumber + 1;

            if (dayNumber == 6) {
                nextDay = 0;
            }
            return days[nextDay];
        }

        string previousDay() {
            int previousDay = dayNumber - 1;

            if (dayNumber == 0) {
                previousDay = 6;
            }
            return days[previousDay];
        }

        string daycount(int numberInput) {
            int nextNumberday = dayNumber + numberInput;
            int dayToReturn = nextNumberday % 7;

            return days[dayToReturn];
        }

};

void result(dayType current, string day, int numbercounts) {
    current.setDay(day);
    current.printDay();
    cout<<""<<endl;
    cout<<current.returnDay()<<endl;
    cout<<current.nextDay()<<endl;
    cout<<current.previousDay()<<endl;
    cout<<current.daycount(numbercounts)<<endl;
}

int main() {
    string day;
    int numberCount;
    cout<<"enter the first three letters of the current day: ";
    cin>>day;
    cout<<"enter the number of days to count ahead: ";
    cin>>numberCount;

    dayType today;
    result(today, day, numberCount);

    
    return 0;
}