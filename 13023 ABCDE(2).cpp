#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector <int> a[2001];
void dfs(int x);
bool exist = false;
bool check[2001] = { 0, };
int depth = 0;
stack <int> st;

int main(void){
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < m; ++i){
        int x, y;
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }

    for(int i = 0; i < n; ++i){
        dfs(i);
        if(exist == true){
            cout << 1 << "\n";
            return 0;
        }
        while(!st.empty()){
            st.pop();
        }
        for(int i = 0; i < n; ++i){
            check[i] = false;
        }
    }
    cout << 0 << "\n";

    return 0;
}

void dfs(int x){
    check[x] = true;
    st.push(x);
    if(st.size() >= 5){
        exist = true;
        return;
    }
    for(int i = 0; i < a[x].size(); ++i){
        int y = a[x][i];
        if(check[y] == false){
            dfs(y);
            st.pop();
            check[y] = false;
        }

    }
}

