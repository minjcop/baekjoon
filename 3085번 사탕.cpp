#include <stdio.h>

void swap(char *a, char *b);
int check();
int n;
char ar[52][52] = { 0, };

int main()
{
	int max = 1; // ���ӵ� ���� ���� �ִ�.
	int i, j; 
	int ret;
	
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++){ // ���� �迭 �Է¹ޱ� 1~n��, 1~n�� 
		scanf("%s", ar[i]);
	}
		
	//�ٲٰ� �������ΰ� ������ �����ָ� �ȴ�. 
	for(i = 1 ; i <= n; i++){
		for(j = 1; j < n; j++){
			swap(&ar[i][j], &ar[i][j + 1]);
			//�ٲ� ��  �������ΰ� ���� �˻�.
			ret = check();
			if(max < ret)
				max = ret;
		}
			swap(&ar[i][j], &ar[i][j + 1]); // �ٽ� �ٲ��ֱ�. 
	}
	for(i = 1 ; i < n; i++){
		for(j = 1; j <= n; j++){
			swap(&ar[i][j], &ar[i + 1][j]);	
			ret = check();
			if(max < ret)
				max = ret;
			swap(&ar[i][j], &ar[i + 1][j]); // �ٽ� �ٲ��ֱ�. 
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
	//�ٲ� ��  �������ΰ� ���� �˻�.
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

