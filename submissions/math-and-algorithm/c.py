#include <stdio.h>

int main(void){
  int i,N,a[50];
  scanf("%d",&N);
  for(i=0;i<N;i++){
    scanf("%d",&a[i]);
  }
  
  int s=0;
  for(i=0;i<N;i++){
    s=s+a[i];
  }
  printf("%d",s);
  return 0;
}
