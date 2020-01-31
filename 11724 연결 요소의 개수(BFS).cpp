#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector <int> a[1001];
bool check[1001] = { 0, };
queue <int> q;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    for(int i = 0; i < m; ++i){
        int x, y;
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }

    int num = 0;
    for(int i = 1; i <= n; ++i){
        int x;
        if(check[i] == false){
            num++;
            q.push(i);
            check[i] = true;
        }
        while(!q.empty()){
            x = q.front();
            q.pop();
            for(int i = 0; i < a[x].size(); ++i){
                int y = a[x][i];
                if(check[y] == false){
                    q.push(y);
                    check[y] = true;
                }
            }
        }
    }

    cout << num << "\n";

    return 0;
}
