#include <iostream>

using namespace std;

int max(int a, int b, int c){
	if(a > b){
		if(a > c)	return a;
		else	return c;
	}else{
		if(b > c)	return b;
		else	return c;
	}
}
	
		
int main(void)
{
	int n;
	cin >> n;
	int ar[10001] = { 0, };	
	int dp[10001] = { 0, };
	
	int i;
	for(i = 0; i < n; ++i){
		cin >> ar[i];
	}
	dp[0] = ar[0];
	dp[1] = ar[0] + ar[1];
	for(i = 2; i < n; ++i){
		dp[i] = max(dp[i-3] + ar[i-1] + ar[i], dp[i-2] + ar[i], dp[i-1]);
	}
	
	cout << dp[n-1] << endl;
	
	return 0;
}
