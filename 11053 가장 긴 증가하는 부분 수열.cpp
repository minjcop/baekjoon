#include <iostream>
#include <algorithm> // max

using namespace std;

int a[1001] = { 0, };
int dp[1001] = { 0, };  // dp[n]�� n���� ���� �� �����ϴ� �κ� ����.

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        dp[i] = 1;
    }

    for(int i = 1; i <= n; ++i){ // �����ϴ� �� ������ ��
        int x = 0;
        for(int j = i + 1; j <= n; ++j){ // �����ϴ� ��
            if(a[i] < a[j] && dp[i] >= dp[j]){ // a[i]�� a[j]���� �۾Ƽ� �����ϴ� �κ� �����̰�, dp[j]���� dp[i]�� ũ�ų������� j = i+1�̹Ƿ� Ŀ����.
                dp[j] = dp[i] + 1;
            }
        }
    }

    int result = 0; // ���� �� �����ϴ� �κм���
    for(int i = 1; i <= n; ++i){
        if(result < dp[i]){
            result = dp[i];
        }
    }
    cout << result;

    return 0;
}
