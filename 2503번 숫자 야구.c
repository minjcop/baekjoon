s#include <stdio.h>

int main()
{
	int n;
	int inputst;
	scanf("%d", &n);
	int i, j, k;
	int isPass[1001] = { 0, }; 
	int index;
	int num = 0;
	int qNum, strike, ball;
	int exit = 0;
	int answer = 0;
	for(i = 1; i <= 9; i++){
		for(j = 1; j <= 9 ; j++){
			for(k = 1; k <= 9; k++){
				if(!(i == k || j == k || i == j)){
					index = 100*i + 10*j + k; 
					isPass[index] = 1;  // 서로다른 숫자면 1 	
				}
				
			}
		}
	}
	for(i = 0; i < n; i++){
		scanf("%d %d %d", &qNum, &strike, &ball);
		inputst = strike;
		if(exit == 1)
			break;
		for(j = 123; j < 988; j++){
			if(isPass[j] == 1){ // 서로 다른 숫자 만족하는 것
				//같은 자리의 수가 같을때 
				if(qNum / 100 == j / 100){
					strike--;
				}
				if((qNum % 100) / 10 == (j % 100) / 10){
					strike--;
				}
				if(qNum % 10 == j % 10){
					strike--;
				}
				//서로 다른 자리의 수를 동일하게 가질때 
				if((qNum % 100) / 10 == j / 100  || 
						qNum % 10 == j / 100 ){
							ball--;
					}
				if(qNum / 100 == (j % 100) / 10 ||
						qNum % 10 == (j % 100) / 10){
							ball--;
					}
				if(qNum / 100 == j % 10 ||
					(qNum % 100) / 10 == j % 10){
							ball--;
					}
			}
			if(inputst == 3 && strike == 0){
				exit = 1;
			}
			if(ball != 0 || strike != 0){
				isPass[j] = 0;
			}
		}
	}
	for(i = 123; i < 988; i++){
		if(exit == 1)
			break;
		if(isPass[i] == 1){
			printf("%d\n", i); 
			answer++;
		}
	}
	if(exit == 0)
		printf("%d", answer);
	else{
		printf("%d", 1);
	}
		
	return 0;
}
