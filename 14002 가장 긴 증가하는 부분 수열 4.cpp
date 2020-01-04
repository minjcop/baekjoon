#include <iostream>
#include <stack> // vector

using namespace std;

int a[1001] = { 0, };
int dp[1001] = { 0, };  // dp[n]�� n���� ���� �� �����ϴ� �κ� ����.
int V[1001] = { 0, }; // dp[n]�� ��� �����ߴ����� �������ش�. V[n] = 0 �̸� dp[n] = 1�ΰ�.

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    stack <int> s;

    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        dp[i] = 1;
    }

    for(int i = 1; i <= n - 1; ++i){ // �����ϴ� �� ������ ��
        int x = 0;
        for(int j = i + 1; j <= n; ++j){ // �����ϴ� ��
            if(a[i] < a[j] && dp[i] >= dp[j]){ // a[i]�� a[j]���� �۾Ƽ� �����ϴ� �κ� �����̰�, dp[j]���� dp[i]�� ũ�ų������� j = i+1�̹Ƿ� Ŀ����.
                dp[j] = dp[i] + 1;
                V[j] = i;
            }
        }
    }

    int result = 0; // ���� �� �����ϴ� �κм���
    int resultIndex = 0; // ���� �� �����ϴ� �κм����� ���� ���� ����� �ε���.
    for(int i = 1; i <= n; ++i){
        if(result < dp[i]){
            result = dp[i];
            resultIndex = i;
        }
    }


    // resultIndex���� �Ųٷ� ���󰡼� �迭�� �����ϰ�, �� �迭�� ����� ������� ���.
    // ���� ��ĺ��� ������ stack <int> s;����ϴ� ���� �� ���ҵ�.
    for(int i = 0; i < result; ++i){ // result�� ��, �� ���������� ����ŭ ���ÿ� Ǫ���ϸ� ��.
        s.push(a[resultIndex]);
        resultIndex = V[resultIndex];
    }

    cout << result << "\n";

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
