//* https://www.scaler.com/topics/sieve-of-eratosthenes-cpp/

//& Normal method to find prime nos
/*
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    isPrime(4191) ? cout << " true\n" : cout << " false\n";
    isPrime(15) ? cout << " true\n" : cout << " false\n";
    return 0;
}*/

//& In this algorithm sieve is a filter that removes non-primes as one goes along a list of numbers, and at the end, we will be left with all the prime numbers after excluding non-primes with the help of the sieve of Eratosthenes algorithm.

#include <bits/stdc++.h>
using namespace std;

void sieve_of_eratosthenes(int n)
{

    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    // start looking with the smallest prime number, i.e 2.

    for (int p = 2; p * p <= n; p++)
    {

        // if it is the next prime, then mark all its multiples as false, as they are composite and not prime.
        if (prime[p] == true)
        {

            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    // all the unmarked elements remaining in the list are the primes.

    cout << "The prime numbers under 30 are:" << endl;

    for (int p = 2; p <= n; p++)
        if (prime[p] == true)
            cout << p << " ";
}

int main()
{
    int n = 30;

    sieve_of_eratosthenes(n);
}

//? The time complexity of the Sieve of Eratosthenes is n∗log(log(n)), where n is the number up to which we want to find prime numbers.