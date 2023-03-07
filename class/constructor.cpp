#include <iostream>
#include <string>
using namespace std;

// class student {
//     public:
//         string name() {
//             return "my name is mustapha";
//         }

//         virtual string names() {
//             return "wwwwwwwwwwwwwwwwwww";
//         }
// };

// class learner: public student {
//     public:
//         string name() {
//             return "what am i doing";
//         }

//         string names() {
//             return "are you verrr";
//         }
// };

class student {
    public:
        void name() {
            cout<<"my name is mustapha"<<endl;
        }

        virtual void names() {
            cout<<"wwwwwwwwwwwwwwwwwww"<<endl;
        }
};

class learner: public student {
    public:
        void name() {
            cout<<"what am i doing"<<endl;
        }

        void names() {
            cout<<"are you verrr"<<endl;
        }
};


int main() {
    learner learn;

    learn.name();
    learn.names();
    return 0;
}