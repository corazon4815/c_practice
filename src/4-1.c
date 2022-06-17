#include <stdio.h>

void main() {
	int a;
	
	printf("정수를 입력하시오:");
	scanf("%d", &a);
	
	if(a%2 ==0)
		printf("%d는 짝수, \n", a);
	if(a%2 ==1)
		printf("%d는 홀수, \n");
}