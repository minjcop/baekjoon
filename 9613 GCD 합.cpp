#include <iostream>

using namespace std;

int gcd(int a, int b);

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int ar[101] = { 0, };
    int t;
    int n;

    cin >> t;
    while(t--){
        cin >> n;
        long long sum = 0;
        for(int i = 0; i < n; ++i){
            cin >> ar[i];
        }
        for(int i = 0; i < n-1; ++i){
            for(int j = i+1; j < n; ++j){
                sum += gcd(ar[i], ar[j]);
            }
        }

        cout << sum << "\n";

    }

    return 0;
}

int gcd(int a, int b){

    int t;
    while(b){
        t = a % b;
        a = b;
        b = t;
    }

    return a;
}
