#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
  srand(time(NULL));
int a=rand()%6+1;
int b=rand()%6+1;
 printf("Rolling the dice...\n");
 printf("Die 1: %d\n",a);
 printf("Die 2: %d\n",b);
 printf("Total value: %d\n",a+b);
 if((a+b)>7)
   printf("You won!\n");
 else printf("You lost!\n");

 return 0;
}
