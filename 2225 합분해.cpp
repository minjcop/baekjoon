#include <iostream>

using namespace std;

int main(void)
{	
	int n, k;
	int i, j;
	long long dp[201][201] = { 0, };
	
	cin >> n >> k;
	
	for(i = 0; i <= n; ++i){
		dp[i][1] = 1;
		dp[i][2] = i + 1;
	}
	
	long long sum;
	
	for(i = 3; i <= k; ++i){
		sum = 0;
		for(j = 0; j <= n - 1; ++j){
			sum += dp[j][i - 1];
			sum = sum % 1000000000; 
		}
		dp[j][i] = sum;
	}
	
	for(i = 1; i <= k; ++i){
		dp[1][i] = i;
	}
	
	cout << dp[n][k] << endl;
		
	return 0;
}
