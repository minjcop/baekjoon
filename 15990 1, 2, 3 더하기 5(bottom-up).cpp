#include <iostream>
#define MOD 1000000009

using namespace std;
typedef long long ll;
ll dp[100001][4] = { 0, };

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // dp[n][i] : n이라는 수를 나타내는데 마지막에 i라는 수를 사용한 경우의 수 i는 1 or 2 or 3.
    dp[1][1] = dp[2][2] = dp[3][1] = dp[3][2] = dp[3][3] = 1;

    // bottom-up
    int T;
    cin >> T;

    while(T--){
        int n;
        cin >> n;
        int result = 0;
        for(int i = 4; i <= n; ++i){
            if(!dp[i][1]){
                dp[i][1] = dp[i-1][2] + dp[i-1][3];
                dp[i][1] %= MOD;
            }
            if(!dp[i][2]){
                dp[i][2] = dp[i-2][1] + dp[i-2][3];
                dp[i][2] %= MOD;
            }
            if(!dp[i][3]){
                dp[i][3] = dp[i-3][1] + dp[i-3][2];
                dp[i][3] %= MOD;
            }
        }
        result = (dp[n][1] + dp[n][2]) % MOD;
        result += dp[n][3];
        result %= MOD;
        cout << result << "\n";
    }

    return 0;
}
