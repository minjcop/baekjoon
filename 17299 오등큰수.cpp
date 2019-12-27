#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(void){
    int n;
    cin >> n;

    vector <int> v(n);
    vector <int> oh(n);
    vector <int> freq(n); // �̰� ������ int freq[1000001];�ϸ� �´µ� �̰� ��Ÿ�ӿ������´�.
    stack <int> st;

    for(int i = 0; i < n; ++i){
        cin >> v[i];
        freq[v[i]]++;
    }

    for(int i = 0; i < n; ++i){
        bool inSt = false;
        if(st.empty()){
            st.push(i);
            inSt = true;
        }

        while(!st.empty() && freq[v[st.top()]] < freq[v[i]]){
            oh[st.top()] = v[i];
            st.pop();
        }
        if(inSt == false){
            st.push(i);
        }
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
