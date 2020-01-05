#include <iostream>
#include <algorithm> // min

using namespace std;

int a[1001][4] = { 0, };    // a[n][k] : n번째 집을 k색깔로 칠하는 비용(k = 0 빨강, k = 1 초록, k = 2 파랑)
int dp[1001][4] = { 0, };   // dp[n][k] : n번째까지 칠하는 비용의 최솟값, k = 마지막색깔.
                            // min(dp[n][0], dp[n][1], dp[n][2]) 가 정답임.
int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	for(int i = 1; i <= n; ++i){ // i번째 집
        for(int j = 0; j < 3; ++j){
            cin >> a[i][j];
        }
	}

	for(int i = 1; i <= n; ++i){
        dp[i][0] = a[i][0] + min(dp[i-1][1], dp[i-1][2]);
        dp[i][1] = a[i][1] + min(dp[i-1][0], dp[i-1][2]);
        dp[i][2] = a[i][2] + min(dp[i-1][0], dp[i-1][1]);
	}

	cout << min(min(dp[n][0], dp[n][1]), dp[n][2]);

	return 0;
}
