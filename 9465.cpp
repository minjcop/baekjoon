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
	int ar[3][100001] = { 0, }; // 점수다합쳐도 int 범위 안.행1->[1] 행2->[2] 
	int dp[3][100001] = { 0, };
	
	int T;
	cin >> T;
	int i, j, k;
	int n;
	
	
	for(i = 0; i < T; ++i){
		cin >> n;
		for(j = 1; j <= 2; ++j){
			for(k = 1; k <= n; ++k){
				cin >> ar[j][k]; // 점수 입력 
			}
		}
		
		//모든 경우의 수를 따져서 최댓값보다 높으면 계속 갱신해나간다.
		//모든 경우에서 최대를 구하는 것은 의미가 없고 sum에서 최대여야 된다.
		//ar[i][1] + ar[i+1][2] + ar[i+2][1]
		//ar[i][1] + ar[i+2][2] 
		//둘중에서 뭐가 큰지를 비교하면서 나가면될듯. 
		//맨처음에 선택할 수 있는 것은 1행, 2행의 첫번째것. 
		dp[1][1] = ar[1][1];
		dp[2][1] = ar[2][1];
		dp[1][2] = ar[2][1] + ar[1][2];
		dp[2][2] = ar[1][1] + ar[2][2];
		
		for(j = 3; j <= n; ++j){
			//1행3열부터
			dp[1][j] = max(dp[2][j-2], dp[2][j-1]) + ar[1][j];
			
			//2행3열부터 
			dp[2][j] = max(dp[1][j-2], dp[1][j-1]) + ar[2][j];
		}
		
		cout << max(dp[2][n], dp[1][n]) << endl;
	}
	return 0;
}
