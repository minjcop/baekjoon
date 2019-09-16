#include <stdio.h>

int swap(int a, int b){
	int t;
	t = a;
	a = b;
	b = t;
	return 0;
}

int main(void)
{
	int ar[1001] = { 0, };
	int n;
	scanf("%d", &n);
	
	int i, j;
	
	for(i = 0; i < n; ++i){
		scanf("%d", &ar[i]);
	}
	
	int min = 0;
	int minIndex = 0;
	for(i = 0; i < n - 1; ++i){
		minIndex = i;
		for(j = i + 1; j < n; ++j){
			if(min > ar[j]){
				min = ar[j];
				minIndex = j;
			}
		}
		swap(ar[i], ar[minIndex]);
	}
	
	for(i = 0; i < n; ++i){
		printf("%d", ar[i]);
	}
	
	return 0;	
}

