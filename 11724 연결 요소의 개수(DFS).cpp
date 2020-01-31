#include <iostream>
#include <vector>

using namespace std;

vector <int> a[1000];
bool check[1001] = { 0, };
void dfs(int x){
    check[x] = true;
    for(int i = 0; i < a[x].size(); ++i){
        int y = a[x][i];
        if(check[y] == false){
            dfs(y);
        }
    }
}
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
        if(check[i] == false){
            num++;
            dfs(i);
        }
    }

    cout << num << "\n";
	return 0;
}
