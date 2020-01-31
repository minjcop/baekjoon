#include <iostream>
#include <vector>

using namespace std;

vector <int> a[20001];
int color[20001];

void dfs(int x, int c){
    color[x] = c;
    for(int i = 0; i < a[x].size(); ++i){
        int y = a[x][i];
        if(color[y] == 0){
            dfs(y, 3-c);
        }
    }
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while(T--){
        int v, e;
        cin >> v >> e;

        for(int i = 1; i <= v; ++i){
            a[i].clear();
            color[i] = 0;
        }

        for(int i = 0; i < e; ++i){
            int x, y;
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }

        for(int i = 1; i <= v; ++i){
            if(color[i] == 0){
                dfs(i, 1);
            }
        }

        bool bipartite = true;
        for(int i = 1; i <= v; ++i){
            for(int j = 0; j < a[i].size(); ++j){
                int k = a[i][j];
                if(color[i] == color[k])
                    bipartite = false;
            }
        }

        if(bipartite == true)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";

    }

    return 0;
}


