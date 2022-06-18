#include <stdio.h>

void main() 
{
    int A[]= {76, -59, -34, 90, 169, -12, 13, 103, 3, 29}; //배열선언과 초기화
    int i, *p, max=-1000, min=1000; //포인터 변수 p를 선언
    int maxloc, minloc;
    
    p=&A[0]; //포인터 변수 p에 배열 A의 시작 주소 대입
    printf("배열의 값[]={");
    for(i=0; i<10; i++){
        if(*(p+i) > max){ //*(p+i)는 A[i]와 동일
            max = *(p+i);
            maxloc = i + 1;
        }
        if(*(p+i)< min){
            min = *(p+i);
            minloc = i + 1;
        }
        printf(" %d ", *(p+i));
    }
    printf("} \n");
    printf("최댓값 ==> %d, 위치 ==> %d 번째\n", max, maxloc);
    printf("최솟값 ==> %d, 위치 ==> %d 번째\n", min, minloc);
    
    
}

