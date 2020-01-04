#include <iostream>
#include <algorithm>

using namespace std;

int dp[1001] = { 0, };
int p[1001] = { 0, };

int func(int n);

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for(int i = 1; i <= n; ++i){ // p1부터 시작.
        cin >> p[i];
    }
    cout << func(n) << "\n";

    return 0;
}

int func(int n){
    if(dp[n]){
        return dp[n];
    }else{
        dp[n] = p[n];
        for(int i = 1; i <= n; ++i){
            dp[n] = max(dp[n], func(n-i) + p[i]);
        }
        return dp[n];
    }
}
