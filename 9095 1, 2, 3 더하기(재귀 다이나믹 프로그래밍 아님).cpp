#include <iostream>

using namespace std;

int func(int sum, int goal);
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while(T--){
        int n;
        cin >> n;
        cout << func(0, n) << "\n";
    }
    return 0;
}


int func(int sum, int goal){
    if(sum == goal)
        return 1;
    if(sum > goal)
        return 0;
    int now = 0;
    for(int i = 1; i <= 3; ++i){
        now += func(sum+i, goal);
    }
    return now;
}
