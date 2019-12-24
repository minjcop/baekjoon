#include <iostream>
#include <stack>
#include <string>

using namespace std;

stack <char> st;
string valid(string s){
    int count = 0;
    for(int i = 0; s[i] != '\0'; ++i){

        if(s[i] == '('){
            count++;
        }else if(s[i] == ')'){
            count--;
        }
        if(count < 0)
            return "NO";
    }
    if(count == 0)
        return "YES";
    else
        return "NO";
}

int main(void){
    int T; // testcase
    cin >> T;
    string s;

    for(int i = 0; i < T; ++i){
        cin >> s;
        cout << valid(s) << endl;
    }
    return 0;
}
