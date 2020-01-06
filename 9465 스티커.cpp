#include <iostream>
#include <algorithm> // max

using namespace std;

int a[3][100001] = { 0, };
int dp[3][100001] = { 0, };

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;

	while(T--){
        int n;
        cin >> n;
        for(int i = 0; i < 2; ++i){
            for(int j = 1; j <= n; ++j){
                cin >> a[i][j];
            }
        }

        dp[0][1] = a[0][1];
        dp[1][1] = a[1][1];
        dp[0][2] = dp[1][1] + a[0][2];
        dp[1][2] = dp[0][1] + a[1][2];
        for(int i = 3; i <= n; ++i){
            dp[0][i] = a[0][i] + max(dp[1][i-1], dp[1][i-2]);
            dp[1][i] = a[1][i] + max(dp[0][i-1], dp[0][i-2]);
        }

        cout << max(dp[0][n], dp[1][n]) << "\n";
	}
	return 0;
}
