#include <iostream>
using namespace std;
int main() {
    int number;
    cout<<"enter a positive:  ";
    cin>>number;
    if(number % 2 == 0){
        cout<<number<<" is an even number"<<endl<<endl;
        int i = 2;
        while (i<number){
            cout<<i<<" ";
            i+=2;
        }
    }else{
        cout<<number<<" is an odd number"<<endl;
    }
    return 0;
}
