#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void){
    stack <int> st;
    string s;
    int n;

    cin >> n;
    int m = 0;
    while(n--){
        int x;
        cin >> x;
        if(x > m){
            while(x > m){ // x == m �� �ɶ����� ������Ű�� ���̶�� �����ϸ� �ȴ�.
                st.push(++m);
                s += '+';
            }
            st.pop();
            s += '-';
        }else{
            bool found = false;
            if(!st.empty()){
                if(st.top() == x){
                    st.pop();
                    s += '-';
                    found = true;
                }
            }
            if(!found){
                cout << "NO" << "\n";
                return 0;
            }
        }
    }

    for(auto it : s){
        cout << it << "\n";
    }
    return 0;
}
