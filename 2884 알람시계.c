#include <stdio.h>

int main(void)
{
    int h, m;
    scanf("%d %d", &h, &m);
    
    if(h == 0 && m < 45){
        h = 23;
        m = 60 - (45 - m);
    }
    else if(m < 45){
    	h--;
        m = 60 - (45 - m);
    }
	else{
        m = m - 45;
    }
    
    printf("%d %d", h, m);
    return 0;
}
