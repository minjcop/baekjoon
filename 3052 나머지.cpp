#include <iostream>

using namespace std;

int main(void){

    int x;
    int ar[43] = { 0, };
    for(int i = 0; i < 10; ++i){
        cin >> x;
        ar[(x + 42) % 42] = 1; // (x+42) % 42로 언어마다, 환경마다 다르게 나오는거 방지.
    }

    int sum = 0;
    for(int i = 0; i < 42; ++i){
        if(ar[i]){
            sum += 1;
        }
    }

    cout << sum;
    return 0;
}
