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
	int ar[3][100001] = { 0, }; // ���������ĵ� int ���� ��.��1->[1] ��2->[2] 
	int dp[3][100001] = { 0, };
	
	int T;
	cin >> T;
	int i, j, k;
	int n;
	
	
	for(i = 0; i < T; ++i){
		cin >> n;
		for(j = 1; j <= 2; ++j){
			for(k = 1; k <= n; ++k){
				cin >> ar[j][k]; // ���� �Է� 
			}
		}
		
		//��� ����� ���� ������ �ִ񰪺��� ������ ��� �����س�����.
		//��� ��쿡�� �ִ븦 ���ϴ� ���� �ǹ̰� ���� sum���� �ִ뿩�� �ȴ�.
		//ar[i][1] + ar[i+1][2] + ar[i+2][1]
		//ar[i][1] + ar[i+2][2] 
		//���߿��� ���� ū���� ���ϸ鼭 ������ɵ�. 
		//��ó���� ������ �� �ִ� ���� 1��, 2���� ù��°��. 
		dp[1][1] = ar[1][1];
		dp[2][1] = ar[2][1];
		dp[1][2] = ar[2][1] + ar[1][2];
		dp[2][2] = ar[1][1] + ar[2][2];
		
		for(j = 3; j <= n; ++j){
			//1��3������
			dp[1][j] = max(dp[2][j-2], dp[2][j-1]) + ar[1][j];
			
			//2��3������ 
			dp[2][j] = max(dp[1][j-2], dp[1][j-1]) + ar[2][j];
		}
		
		cout << max(dp[2][n], dp[1][n]) << endl;
	}
	return 0;
}
