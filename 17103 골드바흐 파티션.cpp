#include <iostream>
#define MAX 1000000
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    bool isPrime[MAX] = { 0, };

    for(int i = 2; i <= MAX; ++i){ // 0과 1 은 소수가 아님.
        isPrime[i] = true;
    }

    for(int i = 2; i*i <= MAX; ++i){
        if(isPrime[i]){ // 소수가 아니면 이미 false일테니 굳이 할필요없음.
            for(int j = i*i; j <= MAX; j += i){ // 배수를 없애기 위해 증감식에 j += i
                isPrime[j] = false;
            }
        }
    }

    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int num = 0; // 파티션 개수.
        for(int i = 2; i <= n/2; ++i){
            if(isPrime[i] && isPrime[n-i]){
                num++;
            }
        }
        cout << num << "\n";
    }

    return 0;
}
