#include <iostream>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	
	int dp[31] = { 0, };
	dp[2] = 3;
	dp[4] = 11;
	
	int i;
	if(n % 2 == 1){ // 3 * È¦¼ö 
		cout << 0 << endl;
	}else{
		for(i = 4; i <= n; i = i + 2){
			dp[i] = 3 * dp[i-2] + 2;
		}
		
		cout << dp[n] << endl;
	}
	return 0;
}
