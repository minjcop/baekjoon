#include <stdio.h>

#define MAX 100000

int score[2][MAX]; // ���� 
int sticker[2][MAX] = { 0, };

int T, n;

int max(int a, int b)
{
	return a > b ? a : b;
}

int func(int status, int c) // status, column
{
	if(sticker[status][c] != 0)
		return sticker[status][c];
	//0��° column�� ó��. 
	sticker[0][0] = score[0][0];
	sticker[1][0] = score[1][0];
	
	//else
	if( status == 0 )
		sticker[status][c] = max(func(1, c-1), func(1, c-2)) + score[status][c];
	else
		sticker[status][c] = max(func(0, c-1), func(0, c-2)) + score[status][c];
	
	return sticker[status][c];
}

int main()
{
	scanf("%d", &T);
	int i, j;
	
	for(i = 0; i < T; i++){
		for(j = 0; j < n; j++){
			score[0][j] = 0;
		}
		for(j = 0; j < n; j++){
			score[1][j] = 0;
		}
		scanf("%d", &n);
		
		
		for(j = 0; j < n; j++){
			scanf("%d", &score[0][j]);
		}
		for(j = 0; j < n; j++){
			scanf("%d", &score[1][j]);
		}
		printf("%d\n", max(func(0, n + 1), func(1, n + 1)));
	}		
	return 0;
}

