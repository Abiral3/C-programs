#include<stdio.h>
#include<string.h>
void main(){
int n;    
printf("Enter a Decimal number");
scanf("%d",&n);
deci(n);
}
void deci(int d){
char h[20];
int i=0,m;
while(d!=0)
{                                    
    m=d%16;
    if(m>9)
    h[i]=(char)(m+55);
    else
    h[i]=(char)(m+48);
    
    d=d/16;
    i++;
}
h[i]='\0';
strrev(h);
printf("Hexadecimal of given decimal is %s",h);
}
/** Submitted by Deepika Gautam
 * Submitted to Mausam sir **/