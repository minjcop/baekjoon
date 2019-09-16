#include <stdio.h>
#include <string.h>

long long power(int mul);

int main(){
	char str[11] = { 0, };
	int i;
	int a;
	long long result = 0;
	for(i = 0; i < 3; i++){ 
		scanf("%s", str);
		
		if(strcmp(str, "black") == 0){
			a = 0;
		}else if(strcmp(str, "brown") == 0){
			a = 1;
		}else if(strcmp(str, "red") == 0){
			a = 2;
		}else if(strcmp(str, "orange") == 0){
			a = 3;
		}else if(strcmp(str, "yellow") == 0){
			a = 4;
		}else if(strcmp(str, "green") == 0){
			a = 5;
		}else if(strcmp(str, "blue") == 0){
			a = 6;
		}else if(strcmp(str, "violet") == 0){
			a = 7;
		}else if(strcmp(str, "grey") == 0){
			a = 8;
		}else if(strcmp(str, "white") == 0){
			a = 9;
		}
		
		if(i == 0){
			result += 10 * a;
		}else if(i == 1){
			result += a;
		}else{
			result *= power(a);
		}
	}
	printf("%lld", result);
	
	return 0;
}

long long power(int mul)
{
	int i;
	long long ret = 1;
	
	for(i = 0; i < mul; i++){
		ret = ret * 10;
	}
	
	return ret;
}

//int 범위 -21억 ~ 21억임에 유의 
// 오버플로우 일어날 수 있는 것 long long 으로 바꿔주고 출력형식도 %lld 로 바꿔줘야함. 
