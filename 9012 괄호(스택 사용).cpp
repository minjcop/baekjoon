#include <iostream>
#include <stack>
#include <string>

using namespace std;

stack <char> st;
string valid(string s){
    int count = 0;
    for(int i = 0; s[i] != '\0'; ++i){
        int flag = 1;
        if(s[i] == '('){
            st.push(s[i]);
        }else if(s[i] == ')'){
            if(!st.empty()){
                st.pop();
            }else{
                return "NO";
            }
        }
    }
    if(st.empty())
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
        while(!st.empty()){
            st.pop();
        }
    }
    return 0;
}
