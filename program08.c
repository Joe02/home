Contando quantos 1's cada número inteiro escolhido tem em sua forma binária e apresentando aquele que mais possui :

#include <stdio.h>
int main() {
  //Declaração das variáveis
  char count1 = 0, count2 = 0, x, y;
  
  //Pegando as variáveis em Char e transformando em Int
  scanf("%d",x);
  scanf("%d",y);
  
  //Contas do primeiro count
  count1 = (x&1? count1+1 : count1);
  count1 = ((x>>1)&1? count1+1 : count1);
  count1 = ((x>>2)&1? count1+1 : count1);
  count1 = ((x>>3)&1? count1+1 : count1);
  count1 = ((x>>4)&1? count1+1 : count1);
  count1 = ((x>>5)&1? count1+1 : count1);
  count1 = ((x>>6)&1? count1+1 : count1);
  count1 = ((x>>7)&1? count1+1 : count1);
  
  //Contas do segundo count
  count2 = (y&1? count2+1 : count2);
  count2 = ((y>>1)&1? count2+1 : count2);
  count2 = ((y>>2)&1? count2+1 : count2);
  count2 = ((y>>3)&1? count2+1 : count2);
  count2 = ((y>>4)&1? count2+1 : count2);
  count2 = ((y>>5)&1? count2+1 : count2);
  count2 = ((y>>6)&1? count2+1 : count2);
  count2 = ((y>>7)&1? count2+1 : count2);
  
  //Print para sair qual número tem o maior número de 1's
    printf("%d<%d",(count1-count2>=0? count2 : count1),(count1-count2<=0? count2 : count1));
    return 0;
}
