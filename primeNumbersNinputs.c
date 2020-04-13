#include <stdio.h>
#include<stdbool.h>

int isPrimeNumber(int);

int main()
{
   bool isPrime;
   int size;
   int i;

   printf("Enter how many number you want to check: ");
   scanf("%d", &size);

   int arr[size];

   for(i=1; i <= size; i++){
       printf("Enter element %d: ", i);
       scanf("%d",&arr[i]);
   }

   for(i = 1; i <= size; i++) {
      // isPrime will be true for prime numbers
      isPrime = isPrimeNumber(arr[i]);

      if(isPrime == true) // if number is prime(isPrime is true) then print prime else not prime
         printf("%d is a prime number\n", arr[i]);
      else
        printf("%d is not a prime number\n", arr[i]);
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
