#include <stdio.h>
#include <math.h>

double mySqrt(double x);

int main(void) {

double num;
  
  printf("Find the square root of:\n");
  scanf("%lf", &num);

  double squared = mySqrt(num);

  if (squared == -1){
    printf("We can only find the square root of positive numbers here.");
    
  }else{
    printf("The square root of %lf is : %lf", num, squared);
  }

 

  
  
}


double mySqrt(double x){

  if(x<0){
    return -1;
  }
  double x0 = x/2;
  double x1 = .5*(x0+x/x0);
  while(fabs((x1-x0)/x1)>=0.001){
    x0=x1;
    x1 = 0.5+(x0 +x/x0);
  }
  return x1;
  
}