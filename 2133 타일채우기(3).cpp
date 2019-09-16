#include <iostream>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	
	int dp[31] = { 0, };
	dp[0] = 1;
	dp[2] = 3;
	dp[4] = 11;
	
	int i;
	for(i = 6; i <= n; ++i){
		dp[i] = dp[i-2] * dp[2];
		
		for(int j = 4; j <= i; j = j + 2){
			dp[i] += dp[i - j] * 2;
		}
	}
	
	cout << dp[n] << endl;
	
	return 0;
}
