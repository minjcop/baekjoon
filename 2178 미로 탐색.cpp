#include <iostream>
#include <queue>
#include <cstdio>

using namespace std;

int main(void){
    queue < pair<int, int> > q;
    int a[101][101] = { 0, };
    int dist[101][101] = { 0, };
    const int dx[] = {0, 0, -1, 1};
    const int dy[] = {-1, 1, 0, 0};
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            scanf("%1d", &a[j][i]); // 6 4
        }
    }

    q.push(pair<int, int>(0, 0));
    dist[0][0] = 1;
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i = 0; i < 4; ++i){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx >= 0 && nx < m && ny >= 0 && ny < n){
                if(dist[nx][ny] == 0 && a[nx][ny] == 1){
                    q.push(pair<int, int>(nx, ny));
                    dist[nx][ny] = dist[x][y] + 1;
                }
            }
        }
    }

    cout << dist[m-1][n-1];

    return 0;
}
