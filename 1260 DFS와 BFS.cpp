#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

void dfs(int x);
bool check[1001] = { 0, }; // 방문한 곳이면 1이 저장.
vector <int> a[1001]; // a[x][y]. x와 y의 연결상태 표시.

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m; // n : 정점, m : 간선
    int v; // 탐색 시작 번호.

    cin >> n >> m >> v;
    queue <int> q;

    for(int i = 0; i < m; ++i){
        int x, y;
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    // 낮은 수부터 저장되도록.
    for(int i = 0; i < n; ++i){
        sort(a[i].begin(), a[i].end());
    }

    // DFS
    dfs(v);
    cout << "\n";

    // 초기화.
    for(int i = 1; i <= n; ++i){
        check[i] = false;
    }
    // BFS
    q.push(v);
    check[v] = true;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        cout << x << " ";
        for(int i = 0; i < a[x].size(); ++i){
            int y = a[x][i];
            if(check[y] == false){
                check[y] = true;
                q.push(y);
            }
        }
    }

    cout << "\n";
	return 0;
}

void dfs(int x){
    check[x] = true;
    cout << x << " ";
    for(int i = 0; i < a[x].size(); ++i){
        int y = a[x][i];
        if(check[y] == false){
            dfs(y);
        }
    }
}
