#include <iostream>

using namespace std;

int max(int a, int b){
	if(a > b)
		return a;
	else
		return b;
}

int main(void)
{
	int ar[2][100001] = { 0, }; // 점수다합쳐도 int 범위 안.행1->[1] 행2->[2] 
	int dp[2][100001] = { 0, };
	
	int T;
	cin >> T;
	int i, j, k;
	int n;
	
	for(i = 0; i < T; ++i){
		cin >> n;
		for(j = 0; j < 2; ++j){
			for(k = 0; k < n; ++k){
				cin >> ar[j][k]; // 점수 입력 
			}
		}
	
		dp[0][0] = ar[0][0];
		dp[1][0] = ar[1][0];
		dp[0][1] = ar[1][0] + ar[0][1];
		dp[1][1] = ar[1][1] + ar[0][0];
		
		for(j = 2; j < n; ++j){
			dp[0][j] = max(dp[1][j-2], dp[1][j-1]) + ar[0][j];
			dp[1][j] = max(dp[0][j-2], dp[0][j-1]) + ar[1][j];
		}
		cout << max(dp[1][n-1], dp[0][n-1]) << endl;
	}
	return 0;
}
