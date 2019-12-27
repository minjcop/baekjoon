#include <iostream>

using namespace std;
// �ִ������� ��Ŭ���� ȣ�������� ���� �� �ִ�. �ð����⵵�� O(logN)
// �ּҰ������ a * b / gcd(a, b)�̴�.

int gcd(int a, int b);
int lcm(int a, int b);

int main(void){
    int a, b;
    cin >> a >> b;

    cout << gcd(a, b) << "\n";
    cout << lcm(a, b) << "\n";

    return 0;
}


int gcd(int a, int b){
    while(b){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int lcm(int a, int b){
    return a * b / gcd(a, b);
}
