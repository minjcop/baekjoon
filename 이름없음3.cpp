#include <stdio.h>
 
int main(void){
    int N;
    int Dp[2][1010] = {};
    int A[1010] = {};
    int max = 0;
    scanf("%d", &N);
 
    for (int i = 1; i <= N; i++)
        scanf("%d", &A[i]);
 
    for (int i = 1; i <= N; i++)
    {
        int maxA = 0;
        for (int j = 0; j < i; j++){
            if (A[i]>A[j]){
                if (maxA < Dp[0][j])
                    maxA = Dp[0][j];
            }
        }
        Dp[0][i] = maxA + 1;
    }
 
    
    for (int i = N; i >= 1; i--)
    {
        int maxA = 0;
        for (int j = N; j > i; j--){
            if (A[i]>A[j]){
                if (maxA < Dp[1][j])
                    maxA = Dp[1][j];
            }
        }
        if (Dp[1][i]<maxA + 1)
            Dp[1][i] = maxA + 1;
    }
    
    for (int i = 1; i <= N; i++){
    	printf("%d %d\n", Dp[0][i], Dp[1][i]);
        if (max < Dp[0][i] + Dp[1][i])
            max = Dp[0][i] + Dp[1][i];
    }
 
 
    printf("%d\n", max-1);
 
}


//免贸: https://wootool.tistory.com/99 [快捧府客砒砒
