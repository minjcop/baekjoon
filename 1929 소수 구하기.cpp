#include <iostream>
#include <cstdio>

using namespace std;

int main(void){
    int start, end;
    scanf("%d %d", &start, &end);
    if(start == 1) // 1�� �Ҽ� �Ǻ����� �ʱ� ���ؼ�
        start++;
    for(int i = start; i <= end; ++i){
        bool sosu = true;
        for(int j = 2; j*j <= i; ++j){
            if(i % j == 0){
                sosu = false;
                break;
            }
        }
        if(sosu == true){
            cout << i << "\n";
        }
    }

    return 0;
}
