#include <iostream>
#include <cmath>
using namespace std;

int fun(int x, int y) {
    int flag = 1;
    for (int j=1;j<y;j++) {
        flag = flag*x;
        return flag;
    }
}

int main() {
    cout<<fun(3,5)<<endl;
    return 0;


}