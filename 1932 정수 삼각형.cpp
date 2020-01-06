#include <iostream>
#include <algorithm>

using namespace std;

int a[501][501] = { 0, };
int dp[501][501] = { 0, };

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= i; ++j){
            cin >> a[i][j];
        }
	}
	dp[1][1] = a[1][1];
	dp[2][1] = dp[1][1] + a[2][1];
	dp[2][2] = dp[1][1] + a[2][2];

	for(int i = 1; i <= n; ++i){
        for(int j = 2; j < i; ++j){
            dp[i][j] = max(dp[i-1][j-1], dp[i-1][j]) + a[i][j];
        }
        // j == 1
        dp[i][1] = dp[i-1][1] + a[i][1];
        // j == i
        dp[i][i] = dp[i-1][i-1] + a[i][i];
	}

	int max = 0;
	for(int i = 1; i <= n; ++i){
        if(dp[n][i] > max){
            max = dp[n][i];
        }
	}
	cout << max;

	return 0;
}
