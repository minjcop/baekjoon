#include <stdio.h>

int main(){
	int C;
	int N, L;
	scanf("%d", &C);
	int i, j, k, l;
	int ar[1001] = { 0, };
	double avgcost = 100000; // �ִ� ��� 
	double min;
	double sum = 0;
	for(i = 0; i < C; i++){
		scanf("%d %d", &N, &L);
		for(j = 1; j <= N; j++){
			scanf("%d", &ar[j]);
		}
		for(j = 1; j <= N - L + 1; j++){ // ���� 
			for(k = j + L - 1; k <= N; k++){ // �� 
				for(l = j; l <= k; l++){
					sum += ar[l]; // �հ� 
				}
				min = sum/(k - j + 1); //�ּ���� ��� ������� ��. 
				if(avgcost > min){
					avgcost = min;
				}
				sum = 0;
			}
		}
		printf("%.11lf\n", avgcost);
		avgcost = 100000;
	}
	return 0;
}
