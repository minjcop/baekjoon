#include <iostream>
#include <queue>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    priority_queue <int> maxheap;
    priority_queue < int, vector <int>, greater<int> > minheap;

    int x;
    for(int i = 1; i <= n; ++i){
        cin >> x;
        if(maxheap.empty())
            maxheap.push(x);
        else if(maxheap.size() == minheap.size())
            maxheap.push(x);
        else
            minheap.push(x);

        if(i >= 2){
            if(minheap.top() < maxheap.top()){
                int x = minheap.top();
                int y = maxheap.top();
                minheap.pop();
                maxheap.pop();
                minheap.push(y);
                maxheap.push(x);
            }
        }
        cout << maxheap.top() << "\n";
    }
    return 0;
}
