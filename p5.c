#include<stdio.h>

_Bool check_if_prime(unsigned int);

int main(void){

    // variables

    unsigned int nth_prime, test_int, number_of_primes;
    _Bool isPrime;
    

    test_int = 1;
    number_of_primes = 0;

    //ask user for nth prime
    printf("Enter the nth prime to find: ");
    scanf("%u", &nth_prime);


    //check for prime

    while(number_of_primes < nth_prime){

    test_int++;

    isPrime = check_if_prime(test_int);
        if(isPrime == 1)
        number_of_primes++;
    }

    printf("\n The %u Prime Number is %u \n", nth_prime, test_int);

    return 0;

}

_Bool check_if_prime(unsigned int number){

    for(int div = 2; div < number; div++){
        if(number % div == 0)
        {
            return 0;
            
        }
        
    }
    return 1;
}