#include <iostream>

using namespace std;

int main(void){
    int ar[10001] = { 0, };

    int N, X; // N�� ����� ��, X�� ����.
    cin >> N;
    int size = 0;
    for(int i = 0; i < N; ++i){
        string com; // ���
        cin >> com;
        if(com == "push"){
            cin >> X;
            ar[size++] = X;
        }else if(com == "pop"){
            if(size == 0){
                cout << -1 << endl;
            }else{
                cout << ar[size - 1] << endl;
                ar[size -1] = 0;
                size--;
            }
        }else if(com == "size"){
            cout << size << endl;
        }else if(com == "empty"){
            if(size == 0){
                cout << 1 << endl;
            }else{
                cout << 0 << endl;
            }
        }else if(com == "top"){
            if(size == 0){
                cout << -1 << endl;
            }else{
                cout << ar[size - 1] << endl;
            }

        }
    }
    return 0;
}
