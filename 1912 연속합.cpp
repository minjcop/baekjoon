#include <iostream>

using namespace std;

int a[100001] = { 0, };
int dp[100001] = { 0, };

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        dp[i] = a[i];
    }

    for(int i = 2; i <= n; ++i){
        if(dp[i-1] > 0){
            dp[i] += dp[i-1];
        }
    }

    int sum = dp[1];

    for(int i = 2; i <= n; ++i){
        if(sum < dp[i])
            sum = dp[i];
    }
    cout << sum << "\n";

    return 0;
}
