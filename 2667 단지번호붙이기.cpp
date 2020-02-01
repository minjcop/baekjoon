#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int n, cnt;
vector <int> apt;
const int dx[] = {-1, 0, 1, 0};
const int dy[] = {0, -1, 0, 1};
int a[25][25];

void dfs(int x, int y){
    a[x][y] = 0;
    cnt++;
    for(int i = 0; i < 4; ++i){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx < 0 || nx >= n || ny < 0 || ny >= n)
            continue;
        if(!a[nx][ny])
            continue;
        dfs(nx, ny);
    }
}
int main(void){
    cin >> n;

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            scanf("%1d", &a[i][j]);
        }
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            if(a[i][j]){
                cnt = 0;
                dfs(i, j);
                apt.push_back(cnt);
            }
        }
    }

    sort(apt.begin(), apt.end());
    int sz = apt.size();
    cout << sz << "\n";
    for(int i = 0; i < sz; ++i){
        cout << apt[i] << "\n";
    }

    return 0;
}
