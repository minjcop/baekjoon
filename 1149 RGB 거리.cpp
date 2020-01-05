#include <iostream>
#include <algorithm> // min

using namespace std;

int a[1001][4] = { 0, };    // a[n][k] : n��° ���� k����� ĥ�ϴ� ���(k = 0 ����, k = 1 �ʷ�, k = 2 �Ķ�)
int dp[1001][4] = { 0, };   // dp[n][k] : n��°���� ĥ�ϴ� ����� �ּڰ�, k = ����������.
                            // min(dp[n][0], dp[n][1], dp[n][2]) �� ������.
int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	for(int i = 1; i <= n; ++i){ // i��° ��
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
