#include<stdio.h>
void main()
{ int k; 
    char i,j;
    for(i='E';i>='A';i--)
    { for(k='D';k>=i;k--)
    { 
        printf(" ");
    }
        for(j='A';j<=i;j++)
        {
            printf("%c",i);
        }
        printf("\n");
    }
}