#include <iostream>

using namespace std;

int dp[1001] = { 0, };

int func(int n);

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    dp[1] = 1;
    dp[2] = 3;

    cout << func(n);

    return 0;
}

int func(int n){
    if(dp[n]){
        return dp[n];
    }else{
        dp[n] = func(n-1) + 2*func(n-2);
        dp[n] %= 10007;
        return dp[n];
    }
}
