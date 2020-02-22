#include <iostream>
#include <queue>
#include <vector>

using namespace std;
vector <int> a[3000];
int check[3000]; // check[x] = 0 : not visited, 1 : visited, 2 : cycle
int dist[3000];
int go(int x, int p){
    // -2 : found cycle and not included
    // -1 : not found cycle
    // 0 ~ n-1 : found cycle and start index
    if(check[x] == 1){
        return x; // cycle인 경우에만 맨 처음 start index가 원래의 값(visited start point)으로 돌아올 수 있다.
    }
    check[x] = 1;
    for(int y : a[x]){
        if(y == p) continue;
        int res = go(y, x);
        if(res == -2) return -2;
        if(res >= 0){
            check[x] = 2;
            if(x == res)
                return -2; // 지금부터 리턴되는 것은 사이클에 포함시켜주면 안된다.
            else
                return res;
        }
    }
    return -1;
}

int main(void){
    queue <int> q;
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        int x, y;
        cin >> x >> y;
        x -= 1, y -= 1;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    go(0, -1);
    for(int i = 0; i < n; ++i){
        if(check[i] == 2){
            dist[i] = 0;
            q.push(i);
        }else{
            dist[i] = -1;
        }
    }

    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(int i = 0; i < a[x].size(); ++i){
            int y = a[x][i];
            if(dist[y] == -1){
                dist[y] = dist[x] + 1;
                q.push(y);
            }
        }
    }

    for(int i = 0; i < n; ++i){
        cout << dist[i] << " ";
    }
    return 0;
}

