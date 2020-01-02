#include <iostream>
#include <algorithm>

using namespace std;
typedef long long ll;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    ll two = 0, five = 0;
    cin >> n >> m;

    for(ll i = 2; i <= n; i *= 2){
        two += n/i;
    }
    for(ll i = 2; i <= m; i *= 2){
        two -= m/i;
    }
    for(ll i = 2; i <= n-m; i *= 2){
        two -= (n-m)/i;
    }

    for(ll i = 5; i <= n; i *= 5){
        five += n/i;
    }
    for(ll i = 5; i <= m; i *= 5){
        five -= m/i;
    }
    for(ll i = 5; i <= n-m; i *= 5){
        five -= (n-m)/i;
    }

    cout << min(two, five) << '\n';

    return 0;
}
