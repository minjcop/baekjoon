#include <iostream>
#include <cstring>
#include <stack>
#define MAX 500 // codeblock 메모리범위초과.
using namespace std;

int main(void){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    string s1, s2;
    s1.push_back(0);
    s2.push_back(0);
    cin >> s1 >> s2;
    stack <char> st;

    int lcs[MAX+1][MAX+1] = { 0, };

    int len1 = s1.length();
    int len2 = s2.length();

    for(int i = 1; i <= len1; ++i){
        for(int j = 1; j <= len2; ++j){
            if(s1[i-1] == s2[j-1])
                lcs[i][j] = lcs[i-1][j-1] + 1;
            else
                lcs[i][j] = max(lcs[i-1][j], lcs[i][j-1]);
        }
    }
/*
    for(int i = 0; i <= len1; ++i){
        for(int j = 0; j <= len2; ++j){
            cout << lcs[i][j];
        }
        cout << endl;
    }
*/
    cout << lcs[len1][len2] << "\n";

    while(1){
        if(len1 <= 0 || len2 <= 0)
            break;

        if(lcs[len1][len2] == lcs[len1-1][len2])
            len1--;
        else if(lcs[len1][len2] == lcs[len1][len2-1])
            len2--;
        else if(lcs[len1][len2] == lcs[len1-1][len2-1] + 1){
            len1--;
            len2--;
            st.push(len1);
        }
    }
    string output;
    while(!st.empty()){
        output += s1[st.top()];
        st.pop();
    }

    cout << output;

    return 0;
}
