//Convertendo caractere/numeral para binário e dps revelando o caractere:

#include <stdio.h>
int main() {
      char x;
      int numero, numero1, inv;
      scanf("%c",&x);
     
      numero = (x&1)==1? numero+1 : numero+0;
      numero = ((x>>1)&1)==1? numero+10 : numero+0;
      numero = ((x>>2)&1)==1? numero+100 : numero+0;
      numero = ((x>>3)&1)==1? numero+1000 : numero+0;
      numero = ((x>>4)&1)==1? numero+10000 : numero+0;
      numero = ((x>>5)&1)==1? numero+100000 : numero+0;
      numero = ((x>>6)&1)==1? numero+1000000 : numero+0;
      numero = ((x>>7)&1)==1? numero+10000000 : numero+0;

      numero1 = (x&1)==1? numero1+1 : numero1+0;
      numero1 = ((x>>1)&1)==1? numero1+2 : numero1+0;
      numero1 = ((x>>2)&1)==1? numero1+4 : numero1+0;
      numero1 = ((x>>3)&1)==1? numero1+8 : numero1+0;
      numero1 = ((x>>4)&1)==1? numero1+16 : numero1+0;
      numero1 = ((x>>5)&1)==1? numero1+32 : numero1+0;
      numero1 = ((x>>6)&1)==1? numero1+64 : numero1+0;
      numero1 = ((x>>7)&1)==1? numero1+128 : numero1+0;

 
      printf("O binário %d representa o caractere/número : %d em decimal.\nSendo assim, representa o : %c\n",numero,numero1,x);
      return 0;
}
