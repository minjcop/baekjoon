#include <iostream>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	
	int i, j;
	
	int a[1001] = { 0, };
	int dp[2][1001] = { 0, }; // 0 1
	
	for(i = 1; i <= n; ++i){
		cin >> a[i];
		for(j = 0; j <= 1; ++j){
			dp[j][i] = 1;
		}
	}
	int maxdp = 1;
	
	for(i = 2; i <= n; ++i){
		for(j = 1; j <= i-1; ++j){
			if(a[i] > a[j]){
				if(maxdp < dp[0][j])
					maxdp = dp[0][j];
			}
		}
		dp[0][i] = maxdp + 1;
		maxdp = 1;
	}
	
	for(i = n - 1; i >= 1; i--){
		for(j = n; j >= i + 1; j--){
			if(a[i] > a[j]){
				if(maxdp < dp[1][j])
					maxdp = dp[1][j];
			}
		}
		dp[1][i] = maxdp + 1;
		maxdp = 1;
	}
 // 반레 
//	입력:
//	9
//	5 1 6 2 7 3 7 2 1
//	출력:
//	7
//	정답:
//	6
// 7인덱스에서 7 
	int result = 0;
	for(i = 1; i <= n; ++i){
		if(result < dp[0][i] + dp[1][i]){
			result = dp[0][i] + dp[1][i];
			cout << result - 1 << i << endl;
		}
	}
	
	cout << result - 1 << endl;
	
	return 0;
}
