#include <iostream>
#define MOD 10007

using namespace std;
typedef long long ll;

int dp[1001][10] = { 0, };

int main(void){
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);

    int n;
    cin >> n;

    for(int i = 0; i <= 9; ++i){ // ���� 1�̰�, ������ ������ �� 1�� �� ��� �ʱ�ȭ.
        dp[1][i] = 1;
    }
    for(int i = 2; i <= n; ++i){ // ���� ����.
        for(int j = 0; j <= 9; ++j){
            for(int k = 0; k <= j; ++k){
                dp[i][j] += dp[i-1][k];
                dp[i][j] %= MOD;
            }
        }
    }
    int sum = 0; // ���� n�� ���� ������ �� 0 ~ 9 ���� ��� ��ģ ��.
    for(int i = 0; i <= 9; ++i){
        sum += dp[n][i];
        sum %= MOD;
    }

    cout << sum;

    return 0;
}
