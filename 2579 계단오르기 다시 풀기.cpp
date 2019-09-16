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
	cin >> n;
	
	int a[301] = { 0, };
	int dp[301] = { 0, };
	
	int i;
	for(i = 1; i <= n; ++i){
		cin >> a[i];
	}
	
	dp[1] = a[1];
	dp[2] = a[1] + a[2];
	
	for(i = 3; i <= n; ++i){
		dp[i] = max(dp[i-3] + a[i-1] + a[i], dp[i-2] + a[i]);
	}
	
	cout << dp[n] << endl;
	
	return 0;
}
