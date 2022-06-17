#include <stdio.h>

void main() {
	int i, sum = 0;
    
    for(i=1; i<=100; i=i+1){
        if(i % 2)
        {
            sum += i;
        }
    }

    printf("1부터 100까지의 홀수의 합: %d", sum);
}