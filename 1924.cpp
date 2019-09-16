#include <iostream>

using namespace std;

int main(void)
{
	//나머지 1 ~ 7까지 순서대로 월 ~ 일
	int m, d; // 월, 일
	int sum = 0;
	scanf("%d %d", &m, &d);
	for(int j = 1; j <= m; ++j){
		int i = j - 1;
		if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
			sum += 31;
		else if(i == 4 || i == 6 || i == 9 || i == 11 )
			sum += 30;	
		else if(i == 2)
			sum += 28;
	}
	
	sum += d;
	
	if(sum % 7 == 1)
		printf("MON");
	else if(sum % 7 == 2)
		printf("TUE");
	else if(sum % 7 == 3)
		printf("WED");
	else if(sum % 7 == 4)
		printf("THU");
	else if(sum % 7 == 5)
		printf("FRI");
	else if(sum % 7 == 6)
		printf("SAT");
	else if(sum % 7 == 0)
		printf("SUN");  
	return 0;
}

