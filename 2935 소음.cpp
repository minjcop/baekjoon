#include <iostream>
#include <string> // string
#include <algorithm> // max

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a;
    string b;
    char op;

    cin >> a >> op >> b;

    string ans;
    ans += '1';
    if(op == '*'){
        for(int i = 0; i < a.size() + b.size() - 2; ++i){
            ans += '0';
        }
    }else if(op == '+'){
        int s = max(a.size(), b.size());
        for(int i = 0; i < s - 1; ++i){
            ans += '0';
        }
        int it = max(a.size(), b.size()) - min(a.size(), b.size());
        if(it == 0){
            ans[it] = '2';
        }else{
            ans[it] = '1';
        }
    }

    cout << ans << "\n";

    return 0;
}
