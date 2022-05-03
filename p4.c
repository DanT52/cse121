#include<stdio.h>

int main(){

    // variables

    int nth_prime, test_int, number_of_primes;
    _Bool isPrime;
    

    test_int = 1;
    number_of_primes = 0;

    //ask user for nth prime
    printf("Enter the nth prime to find: ");
    scanf("%d", &nth_prime);


        //check for prime

    while(number_of_primes < nth_prime)
    {

    test_int++;

    isPrime = 1;

    for(int div = 2; div < test_int; div++){
        if(test_int % div == 0)
        {
            isPrime = 0;
            break;
        }
    }
        if(isPrime == 1)
        number_of_primes++;
    }

    printf("\n The %u Prime Number is %u \n", nth_prime, test_int);

    return 0;

}