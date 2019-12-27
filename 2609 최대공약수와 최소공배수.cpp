#include <iostream>

using namespace std;
// 최대공약수는 유클리드 호제법으로 구할 수 있다. 시간복잡도는 O(logN)
// 최소공배수는 a * b / gcd(a, b)이다.

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
