#include <stdio.h>

int trinum[50] = { 0, };

int isTrinum(int input);

int main()
{
	int i;
	int n;
	int input;
	for(i = 1; i < 47; i++){
		trinum[i] = (i * (i + 1)) / 2;
	}
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &input);
		printf("%d\n", isTrinum(input));
	}
	return 0;
}

int isTrinum(int input){
	int j, k, l;
	for(j = 1; j < 47; j++){
		for(k = 1; k < 47; k++){
			for(l = 1; l < 47; l++){
				if(input == trinum[j] + trinum[k] + trinum[l]){
					return 1; // 참 
				}
			}
		} 
	}
	return 0; // 거짓   
}

//함수로 return 하는 형식을 취하게 되면 맞으면 true, 틀리면 false를 리턴.
//바로 리턴하므로 불필요한 연산을 수행할 필요가 없어진다. 
