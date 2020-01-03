#include <iostream>

using namespace std;

int dp[15] = { 0, };

int func(int n);
int main(void){
    int T;
    cin >> T;

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    dp[4] = 7;

    int n;
    for(int i = 0; i < T; ++i){
        cin >> n;
        cout << func(n) << "\n";
    }

    return 0;
}

int func(int n){
    if(dp[n]){
        return dp[n];
    }else{
        dp[n] = func(n-1) + func(n-2) + func(n-3);
        return dp[n];
    }
}
