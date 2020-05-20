#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    // 홀수 개 : i/2 + 1 번째 수,
    // 짝수 개 : i/2 번째 수
    priority_queue <int, vector<int>, greater<int> > pq; // 홀수개가 있는 pq
    priority_queue <int, vector<int>, greater<int> > pq2; // 짝수개가 있는 pq
    for(int i = 1; i <= n; ++i){
        int x;
        cin >> x;
        if(i % 2 == 1){
            pq.push(x);
            for(int j = 0; j < i/2; ++j){
                pq2.push(pq.top());
                pq.pop();
            }
            cout << pq.top() << "\n";
            while(!pq.empty()){
                pq2.push(pq.top());
                pq.pop();
            }
        }else{
            pq2.push(x);
            for(int j = 0; j < i/2-1; ++j){
                pq.push(pq2.top());
                pq2.pop();
            }
            cout << pq2.top() << "\n";
            while(!pq2.empty()){
                pq.push(pq2.top());
                pq2.pop();
            }
        }
    }
    return 0;
}
