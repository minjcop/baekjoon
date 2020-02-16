#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

vector <int> v[101];
bool visited[101] = { 0, };

void dfs(int x){
    for(int i = 0; i < v[x].size(); ++i){
        int k = v[x][i];
        if(visited[k])
            continue;
        visited[k] = true;
        dfs(k);
    }
}
int main(void){
    int n;
    cin >> n;

    for(int r = 1; r <= n; ++r){
        for(int c = 1; c <= n; ++c){
            int x;
            cin >> x;
            if(x == 1) v[r].push_back(c);
        }
    }

    for(int i = 1; i <= n; ++i){
        memset(visited, false, sizeof(visited));
        dfs(i);
        for(int j = 1; j <= n; ++j){
            if(visited[j])
                cout << 1 << " ";
            else
                cout << 0 << " ";
        }
        cout << "\n";
    }

	return 0;
}
