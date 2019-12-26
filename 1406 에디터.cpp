#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void){
    stack <int> st1; // ���� ����
    stack <int> st2; // ������ ����
    string result;
    // ���ڿ�, ��ɾ��� ���� �־���.
    string s;
    cin >> s;
    int m;
    cin >> m;

    for(auto it : s){
        st1.push(it);
    }

    while(m--){
        char com;
        cin >> com;
        if(com == 'L'){
            if(!st1.empty()){
                int top1 = st1.top();
                st1.pop();
                st2.push(top1);
            }
        }
        else if(com == 'D'){
            if(!st2.empty()){
                int top2 = st2.top();
                st2.pop();
                st1.push(top2);
            }
        }
        else if(com == 'B'){
            if(!st1.empty())
                st1.pop();
        }
        else if(com == 'P'){
            char c;
            cin >> c;
            st1.push(c);
        }
    }

    while(!st1.empty()){
        int top1 = st1.top();
        st1.pop();
        st2.push(top1);
    }

    while(!st2.empty()){
        result += st2.top();
        st2.pop();
    }

    for(auto it : result){
        cout << it;
    }
    return 0;
}
