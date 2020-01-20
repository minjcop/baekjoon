#include <iostream>
#include <vector>
#define MAX 100000000

using namespace std;

int abs(int a, int b){
    if(a > b)
        return a-b;
    else
        return b-a;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a[21][21] = { 0, };
    int n;
    cin >> n;

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> a[i][j];
        }
    }

    int result = MAX;
    for(int i = 0; i < (1 << n); ++i){
        vector <int> first;
        vector <int> second;
        for(int j = 0; j < n; ++j){
            if(i & (1 << j))
                first.push_back(j); // 1번째 팀 아니면 2번째 팀이기때문에 else
            else
                second.push_back(j);
        }
        if(first.size() != n/2)
            continue;
        int sum1 = 0, sum2 = 0;
        for(int i = 0; i < first.size()-1; ++i){
            for(int j = i+1; j < first.size(); ++j){
                sum1 += a[first[i]][first[j]] + a[first[j]][first[i]];
                sum2 += a[second[i]][second[j]] + a[second[j]][second[i]];
            }
        }
        int temp = abs(sum1, sum2);
        if(result > temp)
            result = temp;
    }

    cout << result;

    return 0;
}
