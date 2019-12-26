#include <iostream>
#include <string>

using namespace std;

int main(void){
    string s;
    cin >> s;

    int result = 0;
    int now = 0;
    for(int i = 0; i < s.size(); ++i){

        if(s[i] == '(' && s[i+1] == '('){
            result += 1;
            now += 1;
        }
        if(s[i] == '(' && s[i+1] == ')' ){
            result += now;
        }
        if(s[i] == ')' && s[i-1] == ')'){
            now -= 1;
        }
    }

    cout << result << endl;
    return 0;
}
