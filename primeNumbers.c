#include <stdio.h>
#include<stdbool.h>

int isPrimeNumber(int);

int main()
{
   bool isPrime;
   int range;
   printf("Enter range: ");
   scanf("%d", &range);
   for(int n = 2; n <= range; n++) {
      // isPrime will be true for prime numbers
      isPrime = isPrimeNumber(n);

      if(isPrime == true) // if number is prime(isPrime is true) then print that number
         printf("%d ", n);
   }
   return 0;
}

// Function that checks whether n is prime or not
int isPrimeNumber(int n) {
   bool isPrime = true;

   for(int i = 2; i <= n/2; i++) {
      if (n%i == 0) {
         isPrime = false;
         break;
      }
   }
   return isPrime;
}
