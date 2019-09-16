#include <iostream>

using namespace std;

int main(void)
{
	int n, k;
	cin >> n >> k;
	
	long long dp[201][201] = { 0, };
	int i, j;
	
	for(i = 0; i <= n; +=i){ // 한개의 수로 만드는 것, 두개의 수로 만드는 것. 
		dp[i][1] = 1;
		dp[i][2] = i + 1;
	}
	
	
	
	
	
			
	
	
	return 0;
}
