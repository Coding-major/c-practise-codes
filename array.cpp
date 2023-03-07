#include <iostream>
using namespace std;

// int main() {
//     string names[3] = {"musty", "ayyuba", "musa"};
//     for (int i=0; i <= 2; i++) {
//         cout<<names[i]<<endl;
//     }
//     return 0;
// }

// int main() {
//     int matrice[3][4] = {{},{},{}};

//     for (int i = 0; i<3; i++) {
//         for (int j=0; j<4; j++) {
//             matrice[i][j] = (i+1) + (j+1);

//            cout<<"["<<i+1<<"] ["<<j+1<<"]  = "<<matrice[i][j]<<endl;

//         }
//     }
//     cout<<matrice[2][1];

//     return 0;
// }


int main() {
    // int sodiq[3];
     
    // for (int i=0; i<3; i++ ) {
    //     for (int j=0; j<4; j++) {
            
    //     }
    // }

    // sodiq[3] = 8;
    // for (int i=0; i<4; i++ ) {
    //     cout<<sodiq[i];
    // }
    // return 0;
    int add = 0;
    int x , y;
    cin>> x >> y;
    if (x < y){
        for(int i = x+1; i < y; i++){
            if (i%2==0){
                add += i;
            }
            else{
                cout << i << ",";
            }
        }

    }
    cout << add;

}
