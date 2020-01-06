#include <iostream>
#include <algorithm>

using namespace std;

int a[10001] = { 0, };
int dp[10001][3] = { 0, }; // 헷갈릴 수 있으니 1, 2
int max3(int a, int b, int c);

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	for(int i = 1; i <= n; ++i){
        cin >> a[i];
	}

    dp[1][0] = 0;
    dp[1][1] = a[1];
    dp[1][2] = a[1]; // 임의로 채웠음.
    dp[2][0] = a[1];
    dp[2][1] = a[2];
    dp[2][2] = a[1] + a[2];
    dp[3][0] = a[1] + a[2];
    dp[3][1] = a[1] + a[3];
    dp[3][2] = a[2] + a[3];
    for(int i = 4; i <= n; ++i){
        dp[i][0] = max3(dp[i-1][0], dp[i-1][1], dp[i-1][2]);
        dp[i][1] = max3(dp[i-2][0], dp[i-2][1], dp[i-2][2]) + a[i];
        dp[i][2] = max3(dp[i-3][0], dp[i-3][1], dp[i-3][2]) + a[i-1] + a[i];
    }

    cout << max3(dp[n][0], dp[n][1], dp[n][2]);


	return 0;
}

int max3(int a, int b, int c){
    return max(max(a, b), c);
}
