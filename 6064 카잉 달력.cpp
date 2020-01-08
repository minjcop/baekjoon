#include <iostream>

using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;

	while(T--){
        int M, N, x, y;
        cin >> M >> N >> x >> y;

        int result = -1;

        if(M > N){
            for(int i = x-1; i <= M*N; i += M){
                y = y % N; // i+1 % 10 == 10 �� �����ϱ� ���ؼ�. x == M�� x�� 0���� ������ش�.
                if((i+1) % N == y){
                    result = i+1;
                    break;
                }
            }
        }else{
            for(int i = y-1; i <= M*N; i += N){
                x = x % M; // ���� ��������.
                if((i+1) % M == x){
                    result = i+1;
                    break;
                }
            }
        }
        cout << result << "\n";
	}

	return 0;
}
