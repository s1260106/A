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
 int c=rand()%6+1;
 printf("Rolling the dice...\n");
 printf("Die 1: %d\n",a);
 printf("Die 2: %d\n",b);
 printf("Die 3: %d\n",c);
 printf("Total value: %d\n%s",a+b,name);
 if((a+b)>7)
   printf(" won!\n");
 else printf(" lost!\n");

 return 0;
}
