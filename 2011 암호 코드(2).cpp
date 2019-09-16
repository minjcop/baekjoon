#include <iostream>
#define MOD 1000000

using namespace std;

// ��ȣ�� �ؼ��� �� ���� ��� 0�� ����Ѵ�.
 
int main(void)
{
	char str[5001] = { 0, };
	int dp[5001] = { 0, };
	
	cin >> str; // ���ڿ� �Է�.
	
	int i;
	dp[0] = 1;
	// x�� ���ڸ�, y�� ��� ���ڸ��� 
	for(i = 1; str[i-1] != '\0'; ++i){
		int x = str[i - 1] - '0'; 
		if(x >= 1 && x <= 9){
			dp[i] += dp[i - 1];
			dp[i] = dp[i] % MOD;
		}
		if(i == 1)
			continue; // ���ڸ��� ���⶧���� ���� ���� ó���� �ʿ䰡 ����.
		int y = (str[i - 2] - '0') * 10 + str[i - 1] - '0';
		if(y >= 10 && y <= 26){
			dp[i] += dp[i - 2];
			dp[i] = dp[i] % MOD;
		}
	}
	
	cout << dp[i-1] << endl;
	
	return 0;
}
