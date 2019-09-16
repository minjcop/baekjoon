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
	int n;
	int a[100001] = { 0, };
	int dp[100001] = { 0, };
	int i;
	
	cin >> n;
	for(i = 1; i <= n; ++i){
		cin >> a[i];
	}
	
	dp[1] = a[1];
	for(i = 2; i <= n; ++i){
		dp[i] = max(dp[i-1], a[i]);
	}
	
	int result = dp[1];
	for(i = 2; i <= n; ++i){
		if(result < dp[i])
			result = dp[i];
	}
	cout << result << endl; 
		
	return 0;
}
