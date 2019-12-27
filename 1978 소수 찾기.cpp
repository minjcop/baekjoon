#include <iostream>
#include <cmath> // sqrt�� ����ϱ� ���ؼ��� smath��������� ��������� �Ѵ�.

using namespace std;

int main(void){
    int n;
    cin >> n;

    int sum = 0;
    int x;
    while(n--){
        cin >> x;
        bool sosu = true;
        if(x == 1){
            sosu = false;
        }
        for(int i = 2; i <= sqrt(x); ++i){
            if(x % i == 0){
                sosu = false;
            }
        }
        if(sosu){
            sum += 1;
        }
    }
    cout << sum;
    return 0;
}
