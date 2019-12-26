#include <iostream>
#include <stack>
#include <iostream>

using namespace std;

int main(void){
    stack <char> st;
    string s;

    getline(cin, s); // 공백포함해서 입력받기 위함.
    s += '\n';
    bool inSt = true;
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == '<'){ // < 가 나오면 스택이 빌때까지 앞의 것들을 다 거꾸로 출력한 후 실행.
            while(!st.empty()){
                cout << st.top();
                st.pop();
            }
            inSt = false;
        }

        if(inSt == true){ // 스택에 넣어야 할 < ... > 에 포함된 태그가 아닐 경우.
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
