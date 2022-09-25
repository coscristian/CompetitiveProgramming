#include<stdlib.h>
#include<bits/stdc++.h>

using namespace std;

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
    int m;
    if (p == 2) {
        return 3;
    }else{
        if (p > 2) {
            m = p + 2;
            while(isPrime(m) != true) {
                m += 2;
            }
            return m;
        }
    }
}

void addDivisor(int div, vector<unsigned long long int> &divisors, unsigned long long int n) {
    if (div != n && !binary_search(divisors.begin(), divisors.end(), div))
        divisors.push_back(div);
}

void primeFactoring(unsigned long long int n, vector<unsigned long long int> &divisors) {
    int p = 2;
    int ai;
    unsigned long long int aux = n;
    if (n > 1) {
        while(p <= floor(sqrt(n))) {
            if (n % p == 0) {
                ai = p;
                n = n / p;  
                addDivisor(ai, divisors, aux);
            }else{
                p = generateNextPrime(p);
            }
        }
        ai = n;
        addDivisor(ai, divisors, aux);
    }
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    unsigned long long int v[n];
    vector <unsigned long long int> divisors;
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // Generar divisor de xi con TFA
    for (int i = 0; i < n; i++) {
        primeFactoring(v[i], divisors);          
        if (divisors.size() == 1) {
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }  
        divisors.clear();
    } 
    return 0;
}