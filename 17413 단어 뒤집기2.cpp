#include <iostream>
#include <stack>
#include <iostream>

using namespace std;

int main(void){
    stack <char> st;
    string s;

    getline(cin, s); // ���������ؼ� �Է¹ޱ� ����.
    s += '\n';
    bool inSt = true;
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == '<'){ // < �� ������ ������ �������� ���� �͵��� �� �Ųٷ� ����� �� ����.
            while(!st.empty()){
                cout << st.top();
                st.pop();
            }
            inSt = false;
        }

        if(inSt == true){ // ���ÿ� �־�� �� < ... > �� ���Ե� �±װ� �ƴ� ���.
            st.push(s[i]);
        }else if(inSt == false){
            cout << s[i];
        }

        if(s[i] == ' ' || s[i] == '\n'){
            while(!st.empty()){
                cout << st.top();
                st.pop();
            }
            if(inSt == true)
                cout << " ";
        }

        if(s[i] == '>'){
            inSt = true;
        }
    }
    return 0;
}
