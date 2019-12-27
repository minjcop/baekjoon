#include <iostream>

using namespace std;

int gcd(int a, int b);
int lcm(int a, int b);

int main(void){
    int T;
    cin >> T;

    while(T--){
        int a, b;
        cin >> a >> b;
        cout << lcm(a, b)<< "\n";
    }

    return 0;
}

int gcd(int a, int b){
    int r;
    while(b){
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int lcm(int a, int b){
    return a * b / gcd(a, b);
}
