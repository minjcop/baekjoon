#include <stdio.h>

void swap(int a, int b);

int main()
{
	int n;
	int max = 1; // ���ӵ� ���� ���� �ִ�.
	int num = 1;
	int i, j, k, l; 
	scanf("%d", &n);
	char ar[51][51] = { 0, };
	for(i = 1; i <= n; i++){ // ���� �迭 �Է¹ޱ� 1~n��, 1~n�� 
		for(j = 1; j <= n; j++){
			scanf("%c", &ar[i][j]);
		}
	}
		
		
	//�ٲٰ� �������ΰ� ������ �����ָ� �ȴ�. 
	for(i = 1 ; i < n; i++){
		for(j = 1; j < n; j++){
			swap(ar[i][j], ar[i][j + 1]);
			//�ٲ� ��  �������ΰ� ���� �˻�.
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
			swap(ar[i][j], ar[i][j + 1]); // �ٽ� �ٲ��ֱ�. 
		}
	}
	for(i = 1 ; i < n; i++){
		for(j = 1; j < n; j++){
			swap(ar[i][j], ar[i + 1][j]);	
			//�ٲ� ��  �������ΰ� ���� �˻�.
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
			swap(ar[i][j], ar[i + 1][j]); // �ٽ� �ٲ��ֱ�. 
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

