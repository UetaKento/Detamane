#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main(){
  int num;
  int a=0;
  int b=0;
  srand((unsigned)time(NULL));
  printf("Tossing a coin...\n");
  for(int i=1;i<4;i++){
    num=rand()%2;
    if(num==0){
      printf("Round %d: Heads\n",i);
      a++;
    }else{
      printf("Round %d: Tails\n",i);
      b++;
    }
  }
  printf("Heads: %d, Tails: %d\n",a,b);
  if(a>b){
    printf("You won\n");
  }else{
    printf("You lost\n");
  }
}
