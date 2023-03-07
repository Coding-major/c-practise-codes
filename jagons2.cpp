#include <iostream>
#include <string>
using namespace std;

string check(string day) {
    return day;
}
int main() {
    // int array[10], i;
    // int maximum;
    // int mini;
    // for (i=0; i<10; i++) {
    //     cout<<"enter number into number "<<i<<"positon";
    //     cin>>array[i];
    // }

    // for (i=0; i<10; i++) {
    //     if (i == 0) {
    //         maximum = array[i];
    //         mini = array[i];
    //     } else {
    //         if (array[i] > maximum) {
    //             maximum = array[i];
    //         }
    //         if (array[i] < mini) {
    //             mini = array[i];
    //         }
    //     }
        
    // }
    // cout<<maximum<<endl;
    // cout<<mini;

    string input;
    cout<<"enter day: ";
    cin>>input;
    cout<<check(input);
    return 0;
}