#include <iostream>
#include <queue>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    queue <pair<int, int> > q;
    int m, n;
    cin >> m >> n;

    int a[1001][1001]; // 이것때문에 여기서돌리면 제대로 안나옴.
    const int dx[] = {-1, 1, 0, 0};
    const int dy[] = {0, 0, -1, 1};

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> a[j][i];
            if(a[j][i] == 1)
                q.push(pair<int, int>(j, i));
        }
    }

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i = 0; i < 4; ++i){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx >= m || nx < 0 || ny >= n || ny < 0)
                continue;
            if(a[nx][ny])
                continue;
            a[nx][ny] = a[x][y] + 1;
            q.push(pair<int, int>(nx, ny));
        }
    }

    int ans = 0;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            if(a[j][i] == 0){
                cout << -1 << "\n";
                return 0;
            }
            if(a[j][i] > ans)
                ans = a[j][i];
        }
    }

    cout << ans-1 << "\n";

    return 0;
}
