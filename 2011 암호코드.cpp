#include <iostream>
#include <string.h>

#define MOD 1000000

using namespace std;

int main(void)
{
	char str[5001] = { 0, };
	int dp[5001] = { 0, };
	cin >> str;
	int len = strlen(str) + 1;
	
	dp[0] = 1;
	int i;
	for(i = 1; i <= len; ++i){
		int x = str[i] - '0';
		if(x >= 1 && x <= 9){
			dp[i] += dp[i-1];
			dp[i] %= MOD;
		}
		if(i == 1)
			continue; // 한 개 수밖에 없을때는 하나하고 넘어감.
		if(str[i] == '0') continue;
		int y = (str[i-2] - '0') * 10 + str[i-1] - '0';
		if(y >= 10 && y <= 26){
			dp[i] += dp[i-2];
			dp[i] %= MOD;
		}	
	}
	
	cout << dp[i] << endl;
	
	return 0;
		
}
