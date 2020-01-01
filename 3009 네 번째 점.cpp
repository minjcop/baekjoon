#include <iostream>

using namespace std;

int main(void){
    int ar1[1001] = { 0, }; // xÁÂÇ¥
    int ar2[1001] = { 0, }; // yÁÂÇ¥

    int A, B;
    for(int i = 0; i < 3; ++i){
        cin >> A >> B;
        ar1[A]++;
        ar2[B]++;
    }

    for(int i = 1; i < 1001; ++i){
        if(ar1[i] == 1){
            cout << i << " ";
        }
    }

    for(int i = 1; i < 1001; ++i){
        if(ar2[i] == 1){
            cout << i;
        }
    }

    return 0;
}
