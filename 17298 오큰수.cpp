#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(void){

    int n;
    cin >> n;

    vector <int> v(n);
    vector <int> oh(n);
    stack <int> st;

    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }

    for(int i = 0; i < n; ++i){
        bool inSt = false;
        if(st.empty()){
            st.push(i);
            inSt = true;
        }
        while(!st.empty() && v[st.top()] < v[i]){ // 스택이 다 빌때까지 현재입력받은수와 스택에 있는 수를 비교해서 스택을 비교
            oh[st.top()] = v[i];
            st.pop();
        }
        if(inSt == false)
            st.push(i);
    }

    while(!st.empty()){
        oh[st.top()] = -1;
        st.pop();
    }

    for(int i = 0; i < n; ++i){
        cout << oh[i] << " ";
    }
    return 0;
}
