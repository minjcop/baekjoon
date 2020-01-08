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
        x -= 1;
        y -= 1;
        if(M > N){
            for(int i = x; i <= M*N; i += M){
                if(i % N == y){
                    result = i+1;
                    break;
                }
            }
        }else{
            for(int i = y; i <= M*N; i += N){
                if(i % M == x){
                    result = i+1;
                    break;
                }
            }
        }
        cout << result << "\n";
	}

	return 0;
}
