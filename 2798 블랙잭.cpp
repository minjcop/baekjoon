#include <iostream>
#include <vector>
#include <algorithm> // permutation.

using namespace std;

int main(void){
    int n; // 3 <= n <= 100
    int m; // 10 <= m <= 300,000
    cin >> n >> m;
    int card[101] = { 0, }; // 카드
    vector <int> v; // permutation에 쓸 vector.
    for(int i = 0; i < n; ++i){
        cin >> card[i];
        v.push_back(0);
    }

    // 3장.
    for(int i = 0; i < 3; ++i)
        v.pop_back();
    for(int i = 0; i < 3; ++i){
        v.push_back(1);
    }

    int result = 0;
    do{
        int sum = 0;
        for(int i = 0; i < n; ++i){
            if(v[i]){
                sum += card[i];
            }
        }
        if(sum > result && sum <= m){
            result = sum;
        }

    }while(next_permutation(v.begin(), v.end()));

    cout << result;
	return 0;
}
