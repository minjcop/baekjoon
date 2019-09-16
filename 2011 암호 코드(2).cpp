#include <iostream>
#define MOD 1000000

using namespace std;

// 암호를 해석할 수 없는 경우 0을 출력한다.
 
int main(void)
{
	char str[5001] = { 0, };
	int dp[5001] = { 0, };
	
	cin >> str; // 문자열 입력.
	
	int i;
	dp[0] = 1;
	// x는 한자리, y는 묶어서 두자리수 
	for(i = 1; str[i-1] != '\0'; ++i){
		int x = str[i - 1] - '0'; 
		if(x >= 1 && x <= 9){
			dp[i] += dp[i - 1];
			dp[i] = dp[i] % MOD;
		}
		if(i == 1)
			continue; // 두자리수 없기때문에 뒤의 식을 처리할 필요가 없다.
		int y = (str[i - 2] - '0') * 10 + str[i - 1] - '0';
		if(y >= 10 && y <= 26){
			dp[i] += dp[i - 2];
			dp[i] = dp[i] % MOD;
		}
	}
	
	cout << dp[i-1] << endl;
	
	return 0;
}
