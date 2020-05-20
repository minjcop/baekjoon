#include <iostream>
#include <queue>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    priority_queue <int> pq;
    int x;
    for(int i = 0; i < n; ++i){
        cin >> x;
        if(x == 0){
            if(!pq.empty()){ // 우선순위 큐가 비어있는 경우.
                cout << pq.top() << "\n";
                pq.pop();
            }else{
                cout << 0 << "\n";
            }
        }else{
            pq.push(x);
        }
    }
    return 0;
}
