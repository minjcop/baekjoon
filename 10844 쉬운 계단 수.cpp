#include <iostream>
#define MOD 1000000000

using namespace std;
typedef long long ll;
ll dp[101][10] = { 0, }; // dp[n][l] n은 길이, l은 마지막에 쓰인 수.

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for(int i = 1; i <= 9; ++i){ // 시작하는 수 중에서 0은 없다고하였으므로 1부터 9까지만.
        dp[1][i] = 1;
    }

    for(int i = 2; i <= n; ++i){
        for(int j = 1; j <= 8; ++j){
            dp[i][j] = dp[i-1][j-1] + dp[i-1][j+1];
            dp[i][j] %= MOD;
        }
        dp[i][0] = dp[i-1][1];
        dp[i][0] %= MOD;
        dp[i][9] = dp[i-1][8];
        dp[i][9] %= MOD;
    }

    int sum = 0;
    for(int i = 0; i <= 9; ++i){
        sum += dp[n][i];
        sum %= MOD;
    }
    cout << sum;

    return 0;
}
