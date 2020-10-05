#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    int n;
    cin >> n;
    vector <int> ar;
    int x;
    for(int i = 0; i < n; ++i){
        cin >> x;
        ar.push_back(x);
    }

    int res, temp;
    if(n == 2){
        cout << ar[0] * ar[1];
    }else{
        sort(ar.begin(), ar.end());
        res = max(ar[0] * ar[1], ar[0] * ar[1] * ar[n-1]);
        temp = max(ar[n-2] * ar[n-1], ar[n-3] * ar[n-2] * ar[n-1]);
        res = max(res, temp);
    }

    cout << res << "\n";

    return 0;
}
