#include <iostream>
#include <cmath> // ceil (올림)

using namespace std;

int main(void){
    double A, B, V;

    cin >> A >> B >> V;

    cout << (int)ceil((V-A) / (A-B)) + 1 << '\n'; // ceil 은 리턴형이 double이므로 (int)해줘야 함.

    return 0;
}
