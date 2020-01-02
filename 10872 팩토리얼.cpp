#include <iostream>

using namespace std;
typedef long long ll;

ll factorial(ll n){
    if(n == 1 || n == 0) // 0! = 1
        return 1;
    return n * factorial(n-1);
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    cout << factorial(n) << "\n";

    return 0;
}
