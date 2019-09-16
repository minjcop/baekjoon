#include <iostream>

using namespace std;

int min(int a, int b){
	if(a < b)
		return a;
	else
		return b;
}
		
int main(void)
{
	int n;
	cin >> n;
	
	int i, j;
	int dp[100001] = { 0, };
	
	for(i = 1; i <= n; ++i){
		dp[i] = i; // �ִ�(1^2 �� �� �־��� ���) 
	}
	
	// dp[1], dp[2], dp[3] �� ��� i�̴�. �׷��� dp[4]���� ����. 
	for(i = 4; i <= n; ++i){
		for(j = 1; j * j <= i; ++j){
			dp[i] = min(dp[i], dp[i - j*j] + 1);
		}
	}
	
	cout << dp[n] << endl;
	return 0;
}

