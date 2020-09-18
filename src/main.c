#include "Calculator.h"
#include<stdio.h>
 int main(){
 int a,b;
 scanf("%d%d",&a,&b);
 printf("Sum is %d",sum(a,b));
 printf("Sub is %d",sub(a,b));
 printf("Mul is %d",mul(a,b));
 printf("Div is %d",div(a,b));
 printf("Mod is %d",mod(a,b));
 return 0;
 }
 
