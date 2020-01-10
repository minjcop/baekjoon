#include <iostream>
using namespace std;
// � ���� ���� �����ϴ� ������� Ǯ �� �ִ�. O or X
// (n!���� 2^n�� ������.) ���� �� ����� �ξ� ����.
int a[10] = { 0, };
void go(int index, int selected, int n, int m){
    // index : index��� ���� ����� ���������� �ƴ���
    // selected : ���ݱ��� ������ ���� ����.
    if(selected == m){
        for(int i = 0; i < m; ++i){
            cout << a[i] << " ";
        }
        cout << "\n";
        return ;
    }
    if(index > n) return; // ������ ���� ����.
    a[selected] = index;
    go(index+1, selected+1, n, m); // ����.
    a[selected] = 0;
    go(index+1, selected, n, m); // ���Ծ���.

}

int main(void){
    int n, m;
    cin >> n >> m;

    go(1, 0, n, m);
    return 0;
}
