#include <iostream>
#include <string>
using namespace std;

class car {
    public:
        int tyreNums;
        int doornums;
        float height;
        float weight;
        float speed;
        void movement(int length);
};

void car::movement(int length) {
    int i;
    for (i=1; i<=length; i++) {
        cout<<i<<endl;
    }
}

int main() {
    int length;
    car toyota;
    car honda;
    car benz;
    cout<<"enter the limit number";
    cin>>length;

    honda.speed = 8.5;
    honda.tyreNums =8;
    honda.doornums = 4;
    honda.height = 5.8;
    honda.weight = 300.4;

    honda.movement(length);
    return 0;
}