#include <iostream>
#include <string>
#include <cstring>

using namespace std;

bool visited[51][51] = { 0, };
int r, c;
int sx, sy;
string s[51];
const int dx[] = {0, 0, -1, 1};
const int dy[] = {-1, 1, 0, 0};
bool stop = false;

void dfs(int x, int y, int cnt){
    if(stop)
        return;
    visited[x][y] = true;
    for(int i = 0; i < 4; ++i){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx >= r || nx < 0 || ny >= c || ny < 0)
            continue;
        if(s[x][y] != s[nx][ny])
            continue;
        if(!visited[nx][ny]){
            visited[nx][ny] = true;
            dfs(nx, ny, cnt+1);
        }else if(nx == sx && ny == sy && cnt >= 4){
            stop = true;
            return;
        }
    }
}


int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> r >> c;
    for(int i = 0; i < r; ++i){
        cin >> s[i];
    }

    for(int i = 0; i < r; ++i){
        for(int j = 0; j < c; ++j){
            memset(visited, 0, sizeof(visited));
            sx = i, sy = j;
            dfs(i, j, 1);
        }
    }

    if(stop)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
