#include <stdio.h>

int main(void){
  int N,X,Y;
  scanf("%d %d %d",&N,&X,&Y);

  int i,count=0;
  for(i=1;i<=N;i++){
    if((i%X==0)||(i%Y==0)){
      count++;
    }
  }
  printf("%d",count);
  return 0;
}
