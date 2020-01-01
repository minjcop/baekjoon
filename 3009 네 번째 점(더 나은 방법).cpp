#include <iostream>

using namespace std;

int main(void){
    int x[3];
    int y[3];
    int p, q;

    for(int i = 0; i < 3; ++i){
        cin >> x[i] >> y[i];
    }

    if(x[0] == x[1]) p = x[2];
    if(x[0] == x[2]) p = x[1];
    if(x[1] == x[2]) p = x[0];
    if(y[0] == y[1]) q = y[2];
    if(y[0] == y[2]) q = y[1];
    if(y[1] == y[2]) q = y[0];

    cout << p << " " << q;

    return 0;
}
