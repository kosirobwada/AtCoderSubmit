#include <stdio.h>

int main(void){
  int t,a,b,c,d,e,f; 
  scanf("%d",&t);
  a=t*t+2*t+3;
  b=a+t;
  c=b*b+2*b+3;
  d=a*a+2*a+3;
  e=c+d;
  f=e*e+2*e+3;
  printf("%d",f);
  return 0;
}
