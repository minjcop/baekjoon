#include <iostream>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	
	int a[1001] = { 0, };
	int dp[1001] = { 0, };
	
	int i, j;
	
	for(i = 1; i <= n; ++i){
		cin >> a[i];
		dp[i] = 1;
	}
	
	int maxdp = 1;
	for(i = 2; i <= n; ++i){
		for(j = 1; j <= i-1; ++j){
			if(a[j] > a[i]){
				if(maxdp < dp[j]){
					maxdp = dp[j];
				}
				dp[i] = maxdp + 1;
			}
		}
		maxdp = 1;
	}
	
	for(i = 1; i <= n; ++i){
		if(dp[i] > maxdp){
			maxdp = dp[i];
		}
	}
	
	cout << maxdp << endl;
	
	return 0;	
}
