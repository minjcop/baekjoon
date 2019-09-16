#include <stdio.h>

int main()
{
	int n;
	int input;
	scanf("%d", &n);
	int trinum[50] = { 0, };
	int i, j, k, l;
	int possible = 0;
	for(i = 1; i < 47; i++){
		trinum[i] = (i * (i + 1)) / 2;
	}
	for(i = 0; i < n; i++){
		possible = 0;
		scanf("%d", &input);
		for(j = 1; j < 47; j++){
			for(k = 1; k < 47; k++){
				for(l = 1; l < 47; l++){
					if(input == trinum[j] + trinum[k] + trinum[l]){
						possible = 1;
						break;
					}
				}
			}
		}
		
		if(possible == 1){
			printf("1");
		}else{
			printf("0");	
		}
		
	}
	return 0;
}

