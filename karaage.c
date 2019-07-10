#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 

 
int main(void){

  int s,t,h;
  char *n;
 
    printf("What is your name?\n");
     printf(">");
 
    scanf("%s",n);
    printf("Hello, %s!\n",n);

  srand(time(NULL));
  printf("Rolling the dice...\n");
  /* サイコロを振る */
  s = rand() % 6 + 1;
  t = rand() % 6 + 1;
  h = s+t;
 
  /* サイコロの出目を出力 */
  printf("Die 1: %d\nDie 2: %d\nTotal value: %d \n", s,t,h);
if(h>=7)
  printf("%s won!\n",n);
 else
   printf("%s lost\n",n);
  return 0;
}
