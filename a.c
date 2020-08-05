#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main(){
  char name[15];
  printf("Who are you?\n");
  printf("> ");
  scanf("%s",name);
  printf("Hello, %s!\n",name);
}

