#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main(){
    char name[15];
  int num;
  int a=0;
  int b=0;
  srand((unsigned)time(NULL));
  printf("Who are you?\n");
  printf("> ");
  scanf("%s",name);
  printf("Hello, %s!\n",name);
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
    printf("%s won!\n",name);
  }else{
    printf("%s lost!\n",name);
  }
}

