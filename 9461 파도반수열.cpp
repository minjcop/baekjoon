#include <iostream>

using namespace std;

int main(void)
{
	int T;
	cin >> T;
	
	long long dp[101] = { 0, 1, 1, 1, 2, 2, 3, 4, 5, 7, 9, 0,};
	
	int i, j;
	int n;
	
	for(i = 0; i < T; ++i){
		cin >> n;
		for(j = 7; j <= n; ++j){
			dp[j] = dp[j - 1] + dp[j - 5];
		}
		cout << dp[n] << endl;
	}
	
	return 0;
}
