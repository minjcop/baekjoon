#include <iostream>

using namespace std;

int main(void)
{
	int n, k;
	cin >> n >> k;
	
	long long dp[201][201] = { 0, };
	int i, j;
	
	for(i = 0; i <= n; +=i){ // �Ѱ��� ���� ����� ��, �ΰ��� ���� ����� ��. 
		dp[i][1] = 1;
		dp[i][2] = i + 1;
	}
	
	
	
	
	
			
	
	
	return 0;
}
