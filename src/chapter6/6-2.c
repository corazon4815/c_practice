#include <stdio.h>

void main() 
{
    int A[3][3], B[3][3], C[3][3]; //2차원 배열의 선언
    int i, j;
    
    printf("*** Input the first matrix (3*3) *** \n");
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            scanf("%d", &A[i][j]); //2차원 배열의 각 요소에 자료입력
    
    printf("\t## A ## \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++)
            printf("%d", A[i][j]);
        printf("\n");
    }
    printf("*** Input the second matrix (3*3) *** \n");
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            scanf("%d", &B[i][j]); //2차원 배열의 각 요소에 자료 입력
    
    printf("\t## B ## \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++)
            printf("%d", B[i][j]);
        printf("\n");
    }    
    
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            C[i][j]=A[i][j]+B[i][j]; //두 행렬의 합을 계산
    
    printf("\n *** C=A+B *** \n");
    printf("\t ## C ## \n"); 
    
    for(i=0; i<3; i++){
        for(j=0; j<3; j++)
            printf("%2d", C[i][j]);
        printf("\n");
    }
}

