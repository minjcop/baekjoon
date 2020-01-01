#include <iostream>
#include <algorithm> // max, min
#include <cmath> // double pow

using namespace std;

int main(void){
    int x[3];

    while(1){
        for(int i = 0; i < 3; ++i){
            cin >> x[i];
        }

        if(x[0] == 0 && x[1] == 0 && x[2] == 0){
            break;
        }

        sort(x, x + 3); // 오름차순 정렬.
        if(pow(x[0], 2) + pow(x[1], 2) == pow(x[2], 2)){
            cout << "right" << "\n";
        }else{
            cout << "wrong" << "\n";
        }

    }
    return 0;
}

