#include <iostream>
#include <string>
#include <vector>

using namespace std;

int n;
void swap(int &a, int &b);
int check(vector <string> &ar);
int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


    cin >> n;
    vector<string> ar(n);

    for(int i = 0; i < n; ++i){
        cin >> ar[i];
    }


    int maxSum = 1;

    for(int k = 0; k < n; ++k){
        for(int l = 0; l < n-1; ++l){
            swap(ar[k][l], ar[k][l+1]);
            int temp = check(ar);
            if(temp > maxSum)
                maxSum = temp;
            swap(ar[k][l], ar[k][l+1]);
        }
    }

     for(int k = 0; k < n; ++k){
        for(int l = 0; l < n-1; ++l){
            swap(ar[l][k], ar[l+1][k]);
            int temp = check(ar);
            if(temp > maxSum)
                maxSum = temp;
            swap(ar[l][k], ar[l+1][k]);
        }
    }

    cout << maxSum;

	return 0;
}

void swap(int &a, int &b){
    int t;
    t = a;
    a = b;
    b = t;
}

int check(vector <string> &ar){
        int maxSum = 0;
        for(int i = 0; i < n; ++i){ // 열 검사.
            int sum = 1;
            for(int j = 0; j < n-1; ++j){
                if(ar[i][j] == ar[i][j+1]){
                    sum++;
                    if(sum > maxSum)
                        maxSum = sum;
                }else{
                    sum = 1;
                }
            }
        }

        for(int i = 0; i < n; ++i){ // 행 검사.
            int sum = 1;
            for(int j = 0; j < n-1; ++j){
                if(ar[j][i] == ar[j+1][i]){
                    sum++;
                    if(sum > maxSum)
                        maxSum = sum;
                }else{
                    sum = 1;
                }
            }
        }
        return maxSum;
}
