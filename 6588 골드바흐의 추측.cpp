#include <iostream>
#define MAX 1000000
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    bool isPrime[MAX +1] = { 0,};
    isPrime[0] = isPrime[1] = false;
    for(int i = 2; i < MAX; ++i){
        isPrime[i] = true;
    }

    for(int i = 2; i*i < MAX; ++i){
        if(isPrime[i]){
            for(int j = i*i; j < MAX; j += i){
                isPrime[j] = false;
            }
        }
    }

    while(1){
        int n;
        cin >> n;
        if(n == 0)
            break;
        for(int i = 3; i <= n/2; i = i + 2){
            if(isPrime[i] && isPrime[n-i]){
                cout << n << " = " << i << " + " << n-i << '\n';
                break;
            }
        }
    }
    return 0;
}
