#include <iostream>
#include <algorithm> // max

using namespace std;

int a[1001] = { 0, };
int dp[1001] = { 0, };  // dp[n]은 n까지 가장 긴 증가하는 부분 수열.

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        dp[i] = 1;
    }

    for(int i = 1; i <= n; ++i){ // 조사하는 수 이전의 수
        int x = 0;
        for(int j = i + 1; j <= n; ++j){ // 조사하는 수
            if(a[i] < a[j] && dp[i] >= dp[j]){ // a[i]가 a[j]보다 작아서 증가하는 부분 수열이고, dp[j]보다 dp[i]가 크거나같으면 j = i+1이므로 커진다.
                dp[j] = dp[i] + 1;
            }
        }
    }

    int result = 0; // 가장 긴 증가하는 부분수열
    for(int i = 1; i <= n; ++i){
        if(result < dp[i]){
            result = dp[i];
        }
    }
    cout << result;

    return 0;
}
