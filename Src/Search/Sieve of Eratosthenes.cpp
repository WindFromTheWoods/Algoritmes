#include "Sieve of Eratosthenes.h"

#include <iostream>
using namespace std;

int main()
{
    const int n = 100;
    vector<bool> primes(n + 1, true); // By default, all numbers are prime
    primes[0] = primes[1] = false; // 0 and 1 are not prime

    //Sieve of Eratosthenes algorithm
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (primes[i]) // If the current number is prime
        {
            for (int j = i * i; j <= n; j += i)
            {
                primes[j] = false; // Mark multiples as composite
            }
        }
    }

    // Output all primes
    for (int i = 2; i <= n; i++)
    {
        if (primes[i])
            cout << i << ' ';
    }

    cout << endl;
    return 0;
}
