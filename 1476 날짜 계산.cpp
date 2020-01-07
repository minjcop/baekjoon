#include <iostream>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int E, S, M;
    cin >> E >> S >> M;

    int a = 0, b = 0, c = 0;
    for(int i = 1; i <= 7980; ++i){ // 15*28*19 = 7980
        a++;
        b++;
        c++;

        if(a == 16)
            a = 1;
        if(b == 29)
            b = 1;
        if(c == 20)
            c = 1;

        if(a == E && b == S && c == M){
            cout << i;
            break;
        }
    }
    return 0;
}
