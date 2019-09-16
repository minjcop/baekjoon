#include <stdio.h>

void swap(int a, int b);

int main()
{
	int n;
	int max = 1; // 연속된 사탕 개수 최대.
	int num = 1;
	int i, j, k, l; 
	scanf("%d", &n);
	char ar[51][51] = { 0, };
	for(i = 1; i <= n; i++){ // 사탕 배열 입력받기 1~n행, 1~n열 
		for(j = 1; j <= n; j++){
			scanf("%c", &ar[i][j]);
		}
	}
		
		
	//바꾸고 연속적인거 나오면 더해주면 된다. 
	for(i = 1 ; i < n; i++){
		for(j = 1; j < n; j++){
			swap(ar[i][j], ar[i][j + 1]);
			//바꾼 후  연속적인거 개수 검사.
			for(k = 1; k < n; k++){
				num = 1;
				for(l = 1; l < n; l++){
					if(ar[k][l] == ar[k][l + 1]){
						num++;
					}else{
						if(num > max){
						max = num;
						num = 1; 
						}
					}
				}
				if(num > max){
					max = num; 
				}
			}
			for(l = 1; l < n; l++){
				num = 1;
				for(k = 1; k < n; k++){
					if(ar[k][l] == ar[k + 1][l]){
						num++;
					}else{
						if(num > max){
						max = num; 
						num = 1;
						}
					}
				}		
				if(num > max){
					max = num; 
				}
			}
			swap(ar[i][j], ar[i][j + 1]); // 다시 바꿔주기. 
		}
	}
	for(i = 1 ; i < n; i++){
		for(j = 1; j < n; j++){
			swap(ar[i][j], ar[i + 1][j]);	
			//바꾼 후  연속적인거 개수 검사.
			for(k = 1; k < n; k++){
				num = 1;
				for(l = 1; l < n; l++){
					if(ar[k][l] == ar[k][l + 1]){
						num++;
					}else{
						if(num > max){
						max = num; 
						num = 1;
						}
					}
				}
				if(num > max){
					max = num; 
				}
				
			}
			for(l = 1; l < n; l++){
				num = 1;
				for(k = 1; k < n; k++){
					if(ar[k][l] == ar[k + 1][l]){
						num++;
					}else{
						if(num > max){
						max = num;
						num = 1; 
						}
					}
				}
				if(num > max){
					max = num; 
				}
			}
			swap(ar[i][j], ar[i + 1][j]); // 다시 바꿔주기. 
		}
	}
	
	printf("%d", max);
	
	return 0;
}

void swap(int a, int b)
{
	int t;
	t = a;
	a = b;
	b = t;
}

