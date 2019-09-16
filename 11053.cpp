#include <iostream>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	int a[1001] = { 0, };
	int dp[1001] = { 0, };
	 
	int i;
	for(i = 1; i <= n; ++i){ // 1부터 시작 수열 입력 
		cin >> a[i];
	}
	
	
	dp[1] = 1;
	for(i = 1; i <= n; ++i){ // dp초기화 
		dp[i] = 1;
	}
	
	int maxdp = 1;
	int j;
	for(i = 2; i <= n; ++i){
		for(j = 1; j <= i-1; ++j){ //
			if(a[j] < a[i]){
				if(maxdp < dp[j]){
					maxdp = dp[j];
				}
				dp[i] = maxdp + 1;
			}
		}
		maxdp = 1;
	}
	// 결과 출력하는데 maxdp 재사용. 
	for(i = 1; i <= n; ++i){
		if(maxdp < dp[i])
			maxdp = dp[i];
	}
	
	cout << maxdp << endl;
	
	return 0;
}
