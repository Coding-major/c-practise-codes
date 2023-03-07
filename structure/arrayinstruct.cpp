#include <iostream>
#include <string>
using namespace std;

struct myArrays {
    string theArray[10];
};

// void search(myArrays &firstly) {

//     string word;
//     cout<<"enter the word to search";
//     cin>>word;

//     bool put = false;
//     int i;

//     for (i=0; i<10; i++) {
//         if (firstly.theArray[i] == word) {
//             put = true;
//             break;
//         }
//     if (put) {
//         return "The location is index "+ i+1;
//     } else {
//         return -1;
//     }

//     }

// }

int main() {
    bool found = false;
    string word;
    int i;
    myArrays letCheck;

    letCheck.theArray[1] = "mustapha";
    letCheck.theArray[0] = "what";
    letCheck.theArray[8] = "who are you";
    
    cout<<"enter the word to search: ";
    cin>>word;

    

    for (i=0; i<10; i++) {
        if (letCheck.theArray[i] == word) {
            found = true;
            break;
        }
    }
    if (found) {
        cout<<"The location is index "<<i;
    } else {
        cout<<found;
    }
    
    return 0;
}