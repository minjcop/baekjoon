#include <iostream>
#include <stack>
#include <vector>

using namespace std;
int n;
int board[16][16] = { 0, }; // 0�̸� ����, 1�̸� �Ұ���. ���� ���ϰ� �Ϸ��� 0, 1�� �Ͽ���.

int boardNum(){
    int res = 0;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j){
            if(board[i][j] == 0){
                res++;
            }
        }
    }
    return res;
}

int main(void){
    cin >> n;
    stack <pair <int, int> > st;
    int result = 0;

    for(int i = 1; i <= n; ++i){
        st.push(pair<int, int>(1, i));// (��, ��) (1, 1), (1, 2) .... (1, n)
    }

    stack <pair <int, int> > popSt[5];
    stack <pair <int, int> > tempst;

    int prev = 0;
    while(!st.empty()){
        int x = st.top().first;
        int y = st.top().second;
        // �Ź� �ʱ�ȭ�ؼ� ���� ����� �ȳ����� �Ѵ�.
        // x ���� ũ�ų����� pop���ÿ����� ��� ���� 0����.
        if(prev >= x){
            for(int i = prev; i <= n; ++i){
                int row = popSt[i].top().first;
                int col = popSt[i].top().second;
                board[row][col] = 0;
                popSt[i].pop();
            }

        }

        for(int i = 1; i <= n; ++i){
            if(board[x][i] == 0){
                board[x][i] = 1;
                tempst.push(pair<int, int>(x, i)); // ���� ���ִ��� �ƴϸ� ���ÿ� �ִ´�.
            }
        }
        for(int i = 1; i <= n; ++i){
            if(board[i][y] == 0){
                board[i][y] = 1;
                tempst.push(pair<int, int>(i, y));
            }
        }
        for(int i = x, j = y; i <= n && j <= n; ++i, ++j){ // ������ �Ʒ� �밢��.
            if(board[i][j] == 0){
                board[i][j] = 1;
                tempst.push(pair<int, int>(i, j));
            }
        }
        for(int i = x, j = y; i >= 1 && j <= n; --i, ++j){ // ���� �Ʒ� �밢��.
            if(board[i][j] == 0){
                board[i][j] = 1;
                tempst.push(pair<int, int>(i, j));
            }
        }
        for(int i = x, j = y; i >= 1 && j >= 1; --i, --j){ // ���� �� �밢��.
            if(board[i][j] == 0){
                board[i][j] = 1;
                tempst.push(pair<int, int>(i, j));
            }
        }
        for(int i = x, j = y; i <= n && j >= 1; ++i, --j){ // ������ �� �밢��.
            if(board[i][j] == 0){
                board[i][j] = 1;
                tempst.push(pair<int, int>(i, j));
            }
        }
        board[x][y] = 0; // �ش� �ڸ��� 0���� �д�.
        cout << x << " " << y << " " << boardNum() << endl;
        cout << endl;
        st.pop();
        if(x == n){
            for(int i = 1; i <= n; ++i){
                for(int j = 1; j <= n; ++j){
                    cout << board[i][j] << " ";
                }
                cout << endl;
            }
        }
        cout << endl;
        if(x == n && boardNum() >= n){
            result++;
        }else if(boardNum() >= n && x < n){
            for(int i = 1; i <= n; ++i){
                if(board[x+1][i] == 0){
                    st.push(pair<int, int>(x+1, i));
                }
            }
        }else if(boardNum() < n){
            while(!tempst.empty()){
                int row = tempst.top().first;
                int col = tempst.top().second;
                popSt[x].push(pair<int, int>(row, col));
                board[row][col] = 0;
                tempst.pop();
            }
        }

    }

    cout << result;
    return 0;
}
