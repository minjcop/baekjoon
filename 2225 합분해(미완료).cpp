#include <iostream>
#define MOD 1000000000

using namespace std;
typedef long long ll;

ll dp[201][201] = { 0, }; // 정수 k개를 더해서 합이 N

int main(void){

    int n, k;
    cin >> n >> k;

    for(int i = 1; i <= n; ++i){
        dp[i][1] = 1;
    }

    for(int i = 0; i <= n; ++i){
        for(int j = 1; j <= k; ++j){
            for(int l = 0; l <= j; l++)
                dp[i][k] += dp[i-j][k-1];
                dp[i][k] %=

            cout << i << " " << j << " " << dp[i][j] << endl;
        }
    }

    cout << dp[n][k];

    return 0;
}
