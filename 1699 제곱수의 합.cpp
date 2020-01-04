#include <iostream>
#include <algorithm> // min

using namespace std;

int dp[100001] = { 0, };

int func(int n);

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    dp[1] = 1;

    for(int i = 2; i <= n; ++i){
        dp[i] = i; // 최댓값. 1의 제곱으로 다 더해진 것.
    }

    cout << func(n);
}

int func(int n){
    if(n == 1 || dp[n] != n){
        return dp[n]; // dp[1] = 1 이거나, dp[n] != n이 아닌 경우는 올바른 dp값이 정해진 것.
    }
    for(int i = 1; i*i <= n; ++i){
        dp[n] = min(dp[n], func(n-i*i) + 1);
    }
    return dp[n];
}
