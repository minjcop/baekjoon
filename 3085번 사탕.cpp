#include <stdio.h>

void swap(char *a, char *b);
int check();
int n;
char ar[52][52] = { 0, };

int main()
{
	int max = 1; // 연속된 사탕 개수 최대.
	int i, j; 
	int ret;
	
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++){ // 사탕 배열 입력받기 1~n행, 1~n열 
		scanf("%s", ar[i]);
	}
		
	//바꾸고 연속적인거 나오면 더해주면 된다. 
	for(i = 1 ; i <= n; i++){
		for(j = 1; j < n; j++){
			swap(&ar[i][j], &ar[i][j + 1]);
			//바꾼 후  연속적인거 개수 검사.
			ret = check();
			if(max < ret)
				max = ret;
		}
			swap(&ar[i][j], &ar[i][j + 1]); // 다시 바꿔주기. 
	}
	for(i = 1 ; i < n; i++){
		for(j = 1; j <= n; j++){
			swap(&ar[i][j], &ar[i + 1][j]);	
			ret = check();
			if(max < ret)
				max = ret;
			swap(&ar[i][j], &ar[i + 1][j]); // 다시 바꿔주기. 
		}
	}
	
	printf("%d", max);
	
	return 0;
}

void swap(char *a, char *b)
{
	char t;
	t = *a;
	*a = *b;
	*b = t;
}

int check(){
	int k, l;
	int num;
	int max1 = 1, max2 = 1;
	//바꾼 후  연속적인거 개수 검사.
	for(k = 1; k <= n; k++){
		num = 1;
		for(l = 1; l < n; l++){
			if(ar[k][l] == ar[k][l + 1]){
				num++;
			}else{
				if(num > max1){
				max1 = num; 
				num = 1;
				}
			}
		}
		if(num > max1){
			max1 = num; 
		}
	}
	for(l = 1; l <= n; l++){
		num = 1;
		for(k = 1; k < n; k++){
			if(ar[k][l] == ar[k + 1][l]){
				num++;
			}else{
				if(num > max2){
				max2 = num;
				num = 1; 
				}
			}
		}
		if(num > max2){
			max2 = num; 
		}
	}
	if(max1 >= max2)
		return max1;
	else
		return max2;
}

