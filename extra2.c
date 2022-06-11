#include <stdio.h>

convertToBaseTwo(unsigned long long int num);

int main(void) {

unsigned long long int num;
  
  printf("Enter a base_10 number from 0 -- > 18,446,744,073,709,551,615\n");
  scanf("%llu", &num);

  printf("\n you input %llu\n\n", num);

  convertToBaseTwo(num);

  
  
}


convertToBaseTwo(unsigned long long int num){
  unsigned long long int q, r;

  q= num/2;
  r = num % 2;

  if (q>0)
    convertToBaseTwo(q);

  printf("%i",r);
  
}