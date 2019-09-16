#include <stdio.h>

int main()
{
	int c, n, l;
	int price[1001] = { 0, };
	int pricesum[1001] = { 0, };
	double avgMin = 1000000;
	double cost;
	int i, j;
	int start, end;
	scanf("%d", &c);
	for(i = 0; i < c; i++){
		scanf("%d %d", &n, &l);
		for(j = 1; j <= n; j++){
			scanf("%d", &price[j]); // 1부터 시작.
			pricesum[j] = price[j] + pricesum[j - 1]; 
		}
		for(start = 1; start <= n - l + 1; start++){
			for(end = start + l - 1; end <= n; end++){
				cost = pricesum[end] - pricesum[start - 1];
				cost /= (end - start + 1);
				if(cost < avgMin)
					avgMin = cost;
			}
		}
		printf("%.10lf\n", avgMin);
		avgMin = 1000000;
	}
	return 0;
}

