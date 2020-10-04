#include <iostream>
#define MOD 16769023

using namespace std;

int main(void){
    int n;
    cin >> n;

    int res = 1;
    for(int i = 1; i <= n; i = i + 2){
        res *= 2;
        res %= MOD;
    }

    cout << res;

    return 0;
}
