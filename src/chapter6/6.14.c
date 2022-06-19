#include <stdio.h>

void main() 
{
    float array[]={100.0, 200.0, 300.0, 400.0, 500.0};
    float *ptr;
    int len;
    ptr=&array[0]; //포인터를 배열의 첫번째 요소로 지정
    printf("%.1f\n", *ptr); //100.0을 출력
    ptr++;
    printf("%.1f\n", *ptr); //200.0을 출력
    ptr++;
    printf("%.1f\n", *ptr); //300.0을 출력
    ptr++;
    printf("%.1f\n", *ptr); //400.0을 출력
    ptr++;
    printf("%.1f\n", *ptr); //500.0을 출력
    
    ptr=array; //포인터의 위치를 처음 위치로 지정
    
    printf("%.1f\n", *(ptr+2)); //300.0을 출력하지만 포인터의 위치는 바뀌지 않음
    
    printf("%.1f %.1f\n", (ptr+0)[0], (array+0)[0]); //100.0 100.0
    printf("%.1f %.1f\n", (ptr+1)[0], (array+1)[0]); //200.0 200.0
    printf("%.1f %.1f\n", (ptr+4)[0], (array+4)[0]); //500.0 500.0
    printf("%.1f %.1f\n", (ptr-1)[2], (array-1)[2]); //200.0 200.0
    printf("%.1f %.1f\n", (ptr-20)[23], (array-20)[23]); //400.0 400.0
    return;
}