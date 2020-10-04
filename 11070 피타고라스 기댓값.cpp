#include <iostream>
#define MAX 10000000
#define MIN -1
using namespace std;

int main(void){
    int T;
    cin >> T;

    for(int i = 0; i < T; ++i){
        int n, m;
        cin >> n >> m;
        double arS[1001] = { 0, }; // �� ���� �ؿ� ��� ���ؼ��� double �ʿ�.
        double arA[1001] = { 0, }; // �� ����

        for(int j = 0; j < m; ++j){
            int a, b, p, q;
            cin >> a >> b >> p >> q;
            arS[a] += p; // a ���� ����
            arA[a] += q; // a ���� ����
            arS[b] += q; // b ���� ����
            arA[b] += p; // b ���� ����
        }

        double maxPit = MIN;
        double minPit = MAX;
        for(int j = 1; j <= n; ++j){ // ���� 1������ ����. �� ���� �ִ�, �ּ� ��� ��� �� ��� �� ����
            double pit;
            if(arS[j] == 0 && arA[j] == 0)
                pit = 0;
            else{
                pit = arS[j] * arS[j] / (arS[j]*arS[j] + arA[j]*arA[j]);
            }

            if(maxPit < pit)
                maxPit = pit;
            if(minPit > pit)
                minPit = pit;
        }

        maxPit *= 1000;
        maxPit = (int)maxPit;
        minPit *= 1000;
        minPit = (int)minPit;
        cout << maxPit << '\n';
        cout << minPit << '\n';
    }

    return 0;
}
