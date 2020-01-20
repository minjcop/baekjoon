#include <iostream>

using namespace std;

int main(void){
    int a[20] = { 0, };
    int n, s;
    cin >> n >> s;

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    int ans = 0;
    for(int i = 1; i < (1 << n); ++i){ // ��� �κ������� ����ϴ� ����� ��.
        int sum = 0;
        for(int k = 0; k < n; ++k){ // �ش�Ǵ� �κ������� ��쿡 ���� �´� �迭�� ������ �����ش�.
            if(i & (1 << k)){
                sum += a[k];
            }
        }
        if(sum == s)
            ans++;
    }
    cout << ans << '\n';
	return 0;
}
