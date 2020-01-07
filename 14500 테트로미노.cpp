#include <iostream>
#include <algorithm>

using namespace std;

int ar[501][501] = { 0, };
int sum1(int i, int j);
int sum2(int i, int j);
int sum3(int i, int j);
int sum4(int i, int j);
int sum5(int i, int j);
int n, m;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    cin >> n >> m; // 4 <= n, m <= 500

	for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> ar[i][j];
        }
	}

	int sum = 0;
	for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            int temp = sum1(i,j);
            if(sum < temp){
                sum = temp;
            }
            temp = sum2(i,j);
            if(sum < temp){
                sum = temp;
            }
            temp = sum3(i,j);
            if(sum < temp){
                sum = temp;
            }
            temp = sum4(i,j);
            if(sum < temp){
                sum = temp;
            }
            temp = sum5(i,j);
            if(sum < temp){
                sum = temp;
            }
        }
	}

	cout << sum;

	return 0;
}

int sum1(int i, int j){
    int a = 0, b = 0;
    if(j+3 < m)
        a = ar[i][j] + ar[i][j+1] + ar[i][j+2] + ar[i][j+3]; // ¤Ñ
    if(i+3 < n)
        b = ar[i][j] + ar[i+1][j] + ar[i+2][j] + ar[i+3][j]; // |
    return max(a, b);
}
int sum2(int i, int j){
    int a = 0;
    if(i+1 < n && j+1 < m)
        a = ar[i][j] + ar[i][j+1] + ar[i+1][j] + ar[i+1][j+1]; // ¤±
    return a;
}
int sum3(int i, int j){
    int a, b, c, d, e, f, g, h;
    a = b = c = d = e = f = g = h = 0;
    if(i+2 < n && j+1 < m)
        a = ar[i][j] + ar[i+1][j] + ar[i+2][j] + ar[i+2][j+1];
    if(i >= 1 && j+2 < m)
        b = ar[i][j] + ar[i][j+1] + ar[i][j+2] + ar[i-1][j+2];
    if(i+2 < n && j+1 < m)
        c = ar[i][j] + ar[i][j+1] + ar[i+1][j+1] + ar[i+2][j+1];
    if(i+1 < n && j+2 < m)
        d = ar[i][j] + ar[i+1][j] + ar[i][j+1] + ar[i][j+2];
    if(j >= 1 && i+2 < n)
        e = ar[i][j] + ar[i+1][j] + ar[i+2][j] + ar[i+2][j-1];
    if(i+1 < n && j+2 < m)
        f = ar[i][j] + ar[i][j+1] + ar[i][j+2] + ar[i+1][j+2];
    if(i+2 < n && j+1 < m)
        g = ar[i][j] + ar[i][j+1] + ar[i+1][j] + ar[i+2][j];
    if(i+1 < n && j+2 < m)
        h = ar[i][j] + ar[i+1][j] + ar[i+1][j+1] + ar[i+1][j+2];

    return max(max(max(a, b), max(c, d)), max(max(e, f), max(g, h)));
}
int sum4(int i, int j){
    int a, b, c, d;
    a = b = c = d = 0;
    if(i+2 < n && j+1 < m)
        a = ar[i][j] + ar[i+1][j] + ar[i+1][j+1] + ar[i+2][j+1];
    if(i+1 < n && j+2 < m)
        b = ar[i][j] + ar[i][j+1] + ar[i+1][j+1] + ar[i+1][j+2];
    if(i >= 1 && j+2 < m)
        c = ar[i][j] + ar[i][j+1] + ar[i-1][j+1] + ar[i-1][j+2];
    if(j >= 1 && i+2 < n)
        d = ar[i][j] + ar[i+1][j] + ar[i+1][j-1] + ar[i+2][j-1];
    return max(max(a, b), max(c, d));

}
int sum5(int i, int j){
    int a, b, c, d;
    a = b = c = d = 0;
    if(i+1 < n && j+2 < m)
        a = ar[i][j] + ar[i][j+1] + ar[i+1][j+1] + ar[i][j+2];
    if(i+2 < n && j+1 < m)
        b = ar[i][j] + ar[i+1][j] + ar[i+2][j] + ar[i+1][j+1];
    if(i >= 1 && j+2 < m)
        c = ar[i][j] + ar[i][j+1] + ar[i][j+2] + ar[i-1][j+1];
    if(j >= 1 && i+2 < n)
        d = ar[i][j] + ar[i+1][j] + ar[i+2][j] + ar[i+1][j-1];
    return max(max(a, b), max(c, d));
}
