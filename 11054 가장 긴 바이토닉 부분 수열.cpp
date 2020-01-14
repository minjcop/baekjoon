#include <iostream>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int a[1001] = { 0, };
    int dp[1001][2] = { 0, };
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
    }

    for(int i = 1; i <= n; ++i){
        dp[i][0] = 1;
        dp[i][1] = 1;
    }

    for(int i = 1; i <= n; ++i){ // 보통 뒤에다가 저장을 하지. i가 뒤에 있는 것. 이것은 증가수열.
        for(int j = 1; j <= i; ++j){
            if(a[i] > a[j] && dp[i][0] <= dp[j][0])
                dp[i][0] = dp[j][0] + 1;
        }
    }
    for(int i = n; i >= 1; --i){ // 나중에 오는 것에 저장을 한다 처음에 N에 저장, N-1 .... 1에 저장,
        for(int j = n; j >= i; j--){
            if(a[i] > a[j] && dp[i][1] <= dp[j][1])
                dp[i][1] = dp[j][1] + 1;
        }
    }

    int result = 0;
    for(int i = 1; i <= n; ++i){
        if(result < dp[i][0] + dp[i][1])
            result = dp[i][0] + dp[i][1];
    }
    cout << result - 1;

    return 0;
}
