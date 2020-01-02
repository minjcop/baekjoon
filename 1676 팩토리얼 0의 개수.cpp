#include <iostream>

using namespace std;

int num_5(int n);

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int sum = 0;
    for(int i = 5; i <= n; ++i){
        sum += num_5(i);
    }
    cout << sum << "\n";
    return 0;
}


int num_5(int n){
    int ret = 0;
    while(n % 5 == 0 && n / 5 > 0){
        ret++;
        n = n/5;
    }
    return ret;
}
