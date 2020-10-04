#include <iostream>

using namespace std;

int main(void){
    int n;
    cin >> n;
    int ar[1001] = { 0, };

    for(int i = 1; i <= n; ++i){
        cin >> ar[i];
    }

    for(int i = n; i >= 1; --i){
        int num1 = 0; // ÀÎ¿ë È½¼ö
        int num2 = 0; // ÀÎ¿ë È½¼ö X
        for(int j = 1; j <= n; ++j){
            if(ar[j] >= i)
                num1++;
            else if(ar[j] <= i)
                num2++;
        }
        if(num1 >= i && num2 <= i){
            cout << i;
            return 0;
        }
    }

    cout << 0 << endl;

    return 0;
}
