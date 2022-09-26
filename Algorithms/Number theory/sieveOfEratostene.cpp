#include<bits/stdc++.h>

#define MAXPRIMES 15 // Only change this line to generate the prime numbers from 2 to n (inclusive)
long long int arr[MAXPRIMES + 1];

int sieveOfEratostenes(long long int primes[], int n) {
    
    int rootN = floor(sqrt(n)), idPrime = 1;

    arr[0] = 0;
    arr[1] = 0;

    // 1. Mark all the numbers as primes -> (1 marked and 0 not marked)
    for (int i = 2; i <= n; i++) {
        arr[i] = 1;
    }

    for (int i = 2; i <= rootN; i++) {
        if (arr[i] == 1){ // If the number has not been marked
            for (int j = i; j <= n / i; j++) {
                arr[i * j] = 0;  // Put a mark (Not prime)
            }
        }
    }

    for(int i = 2; i <= n; i++) {
        if (arr[i] == 1) { // If the number is unmarked
            primes[idPrime] = i;
            idPrime++;
        }
    }
    return idPrime - 1;  // Returns the amount of prime numbers
}

int main() {

    int totalPrimes;
    long long int primes[MAXPRIMES];

    totalPrimes = sieveOfEratostenes(primes, MAXPRIMES);  // Get the total of primes and in Primes[] get all the primes until n
    
    for (int i = 1; i <= totalPrimes; i++) {
        printf("%lld ", primes[i]);
    }
    
    return 0;
}