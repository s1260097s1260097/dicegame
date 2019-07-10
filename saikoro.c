/*
 * C言語のサンプルプログラム - Webkaru
 * - 乱数 - サイコロをつくってみよう - 
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(void){
 
  int s;
 
  /* 乱数の種を初期化 */
  srand(time(NULL));
 
  /* サイコロを振る */
  s = rand() % 6 + 1;
 
  /* サイコロの出目を出力 */
  printf("サイコロの出目 = %d \n", s);
 
  return 0;
}
