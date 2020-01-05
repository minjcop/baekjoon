#include <iostream>
#define MOD 9901

using namespace std;
typedef long long ll;

ll dp[100001][3] = { 0, }; // 맨 밑 행에 둘다 비어있으면 0, 왼쪽이 차있으면 1, 오른쪽이 차있으면 2라 하자.

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	dp[1][0] = dp[1][1] = dp[1][2] = 1;

	for(int i = 2; i <= n; ++i){
        dp[i][0] = (dp[i-1][0] + dp[i-1][1] + dp[i-1][2]) % MOD;
        dp[i][1] = (dp[i-1][0] + dp[i-1][2]) % MOD;
        dp[i][2] = (dp[i-1][0] + dp[i-1][1]) % MOD;
	}

	int result = (dp[n][0] + dp[n][1] + dp[n][2]) % MOD;

	cout << result;

	return 0;
}
