#include <iostream>
#include <cmath> // ceil (�ø�)

using namespace std;

int main(void){
    double A, B, V;

    cin >> A >> B >> V;

    cout << (int)ceil((V-A) / (A-B)) + 1 << '\n'; // ceil �� �������� double�̹Ƿ� (int)����� ��.

    return 0;
}
