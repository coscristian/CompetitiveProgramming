#include<bits/stdc++.h>
#define MAXPRIMES 1000000
long long int arr[MAXPRIMES + 1];

using namespace std;

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
            primes[idPrime] = pow(i,2);
            idPrime++;

        }
    }
    return idPrime - 1;  // Returns the amount of prime numbers
}

int main() {

    int n, totalPrimes;
    long long int primes[MAXPRIMES], x;
    
    totalPrimes = sieveOfEratostenes(primes, MAXPRIMES);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if(binary_search(primes, primes+totalPrimes+1, x)) {
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    } 

    return 0;
}