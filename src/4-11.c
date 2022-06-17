#include <stdio.h>

void main() 
{
	int i, j;
    float m, k;
    k=26;
    for(i=65; i<=90; i++)
    {
        for(m=k; m>=0; m--)
            print(" ");
        k=k-1;
        for(j=65; j<=i; j++)
            printf("%c", j);
        print("\n");
    }    
    getch();    
    }

}