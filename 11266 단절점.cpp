#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> v[10001];
int order[10001] = { 0, };
bool isCut[10001] = { 0, };
int cnt;
int dfs(int vertex, bool root){
    order[vertex] = ++cnt;
    int ret = order[vertex];
    int childNum = 0;

    for(int i = 0; i < v[vertex].size(); ++i){
        int child = v[vertex][i];
        if(order[child]){
            ret = min(ret, order[child]);
        }else{
            childNum++;
            int val = dfs(child, false);
            if(root == false && val >= order[vertex]){
                isCut[vertex] = true;
            }
            ret = min(ret, val);
        }
    }
    if(root == true && childNum >= 2){
        isCut[vertex] = true;
    }
    return ret;
}

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int V, E;
    cin >> V >> E;

    for(int i = 0; i < E; ++i){
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    for(int i = 0; i < V; ++i){
        if(order[i] == false)
            dfs(i, true);
    }

    int isCutNum = 0;
    vector <int> answer;
    for(int i = 1; i <= V; ++i){
        if(isCut[i]){
            answer.push_back(i);
            isCutNum++;
        }
    }

    cout << isCutNum << "\n";
    for(int i = 0; i < answer.size(); ++i){
        cout << answer[i] << " ";
    }
    return 0;
}
