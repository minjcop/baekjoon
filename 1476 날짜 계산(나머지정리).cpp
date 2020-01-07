#include <iostream>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int E, S, M;
    cin >> E >> S >> M;

    E -= 1;
    S -= 1;
    M -= 1;
    for(int i = 1; i <= 7980; ++i){ // 15*28*19 = 7980
        if(i % 15 == E && i % 28 == S && i % 19 == M ){
            cout << i + 1;
            break;
        }
    }
    return 0;
}
