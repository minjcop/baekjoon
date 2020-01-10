#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
    int n;
    cin >> n;
    vector <int> v(n+1);

    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }

    int index = -1;
    for(int i = n-2; i >= 0; --i){
        if(v[i] < v[i+1]){
            index = i;
            break;
        }
    }
    if(index < 0){
        cout << -1;
    }else{
        for(int i = n-1; i >= index+1; i--){
            if(v[index] < v[i]){
                swap(v[index], v[i]);
                break;
            }
        }

        int i = index+1;
        int j = n-1;
        while(i < j){
            swap(v[i], v[j]);
            i++;
            j--;
        }

        for(int i = 0; i < n; ++i){
            cout << v[i] << " ";
        }
    }
    return 0;
}
