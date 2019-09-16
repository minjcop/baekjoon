#include <iostream>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	double p[1001] = { 0, };
	int i;
	
	for(i = 1; i <= n; ++i){
		cin >> p[i];
	}
	
	int sum = 0;
	double max = 0;
	int maxindex = 0;
	
	while(n > 0){
		max = 0;
		for(i = 1; i <= n; ++i){
			if(p[i] / i >= max){
				max = p[i] / i;
				maxindex = i;
			}
		}	
		sum += (n / maxindex) * p[maxindex];
		n = n % maxindex;
	}
	
	cout << sum << endl;
		
	return 0;
}
