#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main(void){
    int n;
    cin >> n;
    long long dp[50001] = { 0, };

    for(int i = 1; i <= n; ++i){
        dp[i] = i;
    }

    for(int i = 1; i * i <= n; ++i){
        dp[i*i] = 1;
    }

    for(int k = 0; k < 3; ++k){
        for(int i = 1; i <= n; ++i){
            for(int j = 1; j * j <= i; ++j){
                dp[i] = min(dp[i], dp[j*j] + dp[i-j*j]);
            }
        }
    }

    cout << dp[n] << "\n";

    return 0;
}
