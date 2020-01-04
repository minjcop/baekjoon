#include <iostream>

using namespace std;
typedef long long ll;

ll dp[100][2] = { 0, }; // dp[n][l] n : 나열된 수의 개수, l : 마지막에 온 수.(0 or 1)
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    dp[1][0] = dp[2][1] = 0;
    dp[1][1] = dp[2][0] = 1;

    for(int i = 3; i <= n; ++i){
        dp[i][0] = dp[i-1][1] + dp[i-1][0];
        dp[i][1] = dp[i-1][0];
    }

    ll sum = 0;
    sum += dp[n][0];
    sum += dp[n][1];

    cout << sum << "\n";

    return 0;
}
