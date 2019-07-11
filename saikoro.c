#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
  char name[10];
  printf("What is your name?\n>");
  scanf("%s",name);
  printf("Hello, %s!\n",name);
  srand(time(NULL));
int a=rand()%6+1;
int b=rand()%6+1;
 printf("Rolling the dice...\n");
 printf("Die 1: %d\n",a);
 printf("Die 2: %d\n",b);
 printf("Total value: %d\n",a+b);

 return 0;
}
