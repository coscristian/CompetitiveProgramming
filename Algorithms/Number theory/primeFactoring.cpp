#include<bits/stdc++.h>

bool isPrime(int n) {
	int d, p;
	d = 1;
	p = 3;
	if (n == 2 || n == 3) 
		return true;
	if (n > 3) {
		if (n % 2 == 0) {
			d += 1;
		}
		while (p <= floor(sqrt(n)) && d == 1) {
			if (n % p == 0) {
				d += 1;
			}
			p += 2;
		}
		if (d == 1) {
			return true;
		}else{
			return false;
		}
	}	
}

int generateNextPrime(int p) {
    if (p == 2) {
        return 3;
    }
    if (p > 2) {
        int m = p + 2;
        while(isPrime(m) != true) {
            m = m + 2;
        }
        return m;
    }
}

void primeFactoring(int n) {
    int i = 0, p = 2;

    if (n > 1) {
        int ai;
        while(p <= floor(sqrt(n))) {
            if (n % p == 0) {
                ai = p;
                n = n / p;
                i = i + 1;
            }else {
                p = generateNextPrime(p);
            }
        }
        ai = n;
    }

}

int main() {

    

    return 0;
}