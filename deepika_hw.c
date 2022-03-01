#include<stdio.h>
#include<string.h>
void main(){
    char h[16];
    printf("enter a hexadecimal number:\n");
scanf("%s",&h);
 printf("decimal of %s is %d",h,hd(h));
}
int hd(char h[])
{
    int sum=0,i,j,l;
l=strlen(h);        
j=l-1;
for ( i = 0; i<=l-1; i++)
{
    if(h[i]>'0' && h[i]<='9')
    {
        sum=sum+(h[i]-48)*pow(16,j);
        j--;
    }
    else
    {
        sum=sum+(h[i]-55)*pow(16,j);
        j--;
    }
}
    return sum;
}
/** Submitted by Deepika Gautam
 * Submitted to Mausam sir **/