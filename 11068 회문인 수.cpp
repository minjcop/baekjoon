#include <iostream>

using namespace std;

bool palindrome(int n){
    for(int i = 2; i <= 64; ++i){
        string s;
        int num = n;
        while(num){
            s += num % i;
            num /= i;
        }

        string rev;
        for(int i = s.length() - 1; i >= 0; --i){
            rev += s[i];
        }

        if(s == rev)
            return true;
    }
    return false;
}

int main(void){
    int T;
    cin >> T;

    while(T--){
        int n;
        cin >> n;
        if(palindrome(n))
            cout << 1 << "\n";
        else
            cout << 0 << "\n";

    }


    return 0;
}
