#include <iostream>
#include <cmath> // ceil (올림)

using namespace std;

int main(void){
    double A, B, V;

    cin >> A >> B >> V;

    cout << ceil(V-B/A-B) + 1 << endl;


/*
    if(A-B > V-A){
        cout << ceil((double)(V-A)/(A-B)) + 1 << endl; // 100 90 101의 반례를 없애기위해 만듬.
    }else{
        cout << (V-A)/(A-B) + 1 << endl;
    }
*/

    return 0;
}
