#include <iostream>
#define MAX 1000000
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    bool isPrime[MAX] = { 0, };

    for(int i = 2; i <= MAX; ++i){ // 0�� 1 �� �Ҽ��� �ƴ�.
        isPrime[i] = true;
    }

    for(int i = 2; i*i <= MAX; ++i){
        if(isPrime[i]){ // �Ҽ��� �ƴϸ� �̹� false���״� ���� ���ʿ����.
            for(int j = i*i; j <= MAX; j += i){ // ����� ���ֱ� ���� �����Ŀ� j += i
                isPrime[j] = false;
            }
        }
    }

    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int num = 0; // ��Ƽ�� ����.
        for(int i = 2; i <= n/2; ++i){
            if(isPrime[i] && isPrime[n-i]){
                num++;
            }
        }
        cout << num << "\n";
    }

    return 0;
}
