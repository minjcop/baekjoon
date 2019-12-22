#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void){
    stack <char> st;
    int T;
    cin >> T;

    string s;
    cin.ignore();
    for(int i = 0; i < T; ++i){
        getline(cin, s);
        s+='\n';
        for(char ch : s){
            if(ch == ' ' || ch == '\n'){
                while(!st.empty()){
                    cout << st.top();
                    st.pop();
                }
                cout << ch;
            }else{
                st.push(ch);
            }
        }
    }
    return 0;
}
