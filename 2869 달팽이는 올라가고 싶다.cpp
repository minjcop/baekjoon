#include <iostream>
#include <cmath> // ceil (�ø�)

using namespace std;

int main(void){
    double A, B, V;

    cin >> A >> B >> V;

    cout << ceil(V-B/A-B) + 1 << endl;


/*
    if(A-B > V-A){
        cout << ceil((double)(V-A)/(A-B)) + 1 << endl; // 100 90 101�� �ݷʸ� ���ֱ����� ����.
    }else{
        cout << (V-A)/(A-B) + 1 << endl;
    }
*/

    return 0;
}
