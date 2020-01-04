#include <iostream>
#define MOD 1000000009
using namespace std;
typedef long long ll;

ll dp[1000001] = { 0, };
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for(int i = 4; i <= 1000000; ++i){ // 4이상의 수는 예외 처리하지않아도 된다.
        dp[i] = (dp[i-1] + dp[i-2] + dp[i-3]) % MOD;
    }

    int T;
    cin >> T;

    while(T--){
        int n;
        cin >> n;

        cout << dp[n] << "\n";
    }

    return 0;
}
