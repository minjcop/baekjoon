#include <iostream>
#define MOD 1000000000

using namespace std;

int main(void)
{
	int n, k;
	cin >> n >> k;
	
	long long dp[201][201] = { 0, };
	//            n    k
	int i, j, l;
	for(i = 0; i <= 200; ++i){
		dp[i][1] = 1; // 1개 숫자로 i 
		dp[i][2] = i + 1; // 2개 숫자로 i 
	}
	
	for(i = 3; i <= k; ++i){ 
		for(j = 0; j <= n; ++j){ 
			for(l = 0; l <= j; ++l){
				// j : 0 ~ n i : 3 ~ k
				dp[j][i] += dp[l][i - 1];
				dp[j][i] %= MOD;
			}
		}
	}
	
	cout << dp[n][k] << endl;
	
	return 0;
}
