#include <stdio.h>

int main(void){
  int N,S,count=0;
  scanf("%d %d",&N,&S);
  int i,j;
  for(i=1;i<=N;i++){
    for(j=1;j<=N;j++){
      if(i+j<=S)
        count++;
    }
  }
  printf("%d",count);
  return 0;
}
