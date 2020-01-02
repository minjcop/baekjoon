#include <iostream>
#include <string> // string

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    string r;
    for(int i = 0; s[i] != '\0'; ++i){
        int temp = s[i] - '0';
        if(temp >= 4){
            r += '1';
            temp -= 4;
        }else if(r.size() != 0){
            r += '0';
        }

        if(temp >= 2){
            r += '1';
            temp -= 2;
        }else if(r.size() != 0){
            r += '0';
        }

        if(temp >= 1){
            r += '1';
            temp -= 1;
        }else if(r.size() != 0){
            r += '0';
        }
    }

    if(r.size() == 0){
        r += '0';
    }

    cout << r;

    return 0;
}
