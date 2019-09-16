#include <iostream>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	
	int i, j;
	int a[1001] = { 0, };
	int dp[1001] = { 0, };
	for(i = 1; i <= n; ++i){
		cin >> a[i];
		dp[i] = a[i];
	}
	
	int maxdp = 0;
	for(i = 2; i <= n; ++i){
		for(j = 1; j <= i-1; ++j){
			if(a[j] < a[i]){ //���� ��(j)�� ���� ��(i)���� ������
				if(maxdp < dp[j]){
					maxdp = dp[j];
				}	
			}	
		}
		dp[i] += maxdp; // ���� ����� �����ʴٸ� 0�� ���ϰ� �ȴ�.
		maxdp = 0; // ���� ��츦 ���ؼ� �ʱ�ȭ 
	}
	
	for(i = 1; i <= n; ++i){
		if(dp[i] > maxdp)
			maxdp = dp[i];
	}
	
	cout << maxdp << endl;
				
	return 0;
}
