#include <iostream>
#include <vector>

using namespace std;

int result = 0;
void func(int i, int n, vector <int> &t, vector <int> &p, int sum);

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n;
    cin >> n;
    vector <int> t(n+1);
    vector <int> p(n+1);

    for(int i = 1; i <= n; ++i){ // i는 시작일자. 1일에 하는 일이 ti가 3이면 4일부터 다른 일 가능.
        cin >> t[i] >> p[i];
    }

    func(1, n, t, p, 0); // func(i, n, t, p);
    cout << result;

	return 0;
}

void func(int i, int n, vector <int> &t, vector <int> &p, int sum){
    if(i == n+1){
        if(result < sum){
            result = sum;
        }
        return;
    }
    if(i > n+1)
        return;

    func(i+t[i], n, t, p, sum+p[i]);
    func(i+1, n, t, p, sum);
}
