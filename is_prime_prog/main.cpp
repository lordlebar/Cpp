#include <iostream>
#include "sources.h"

using namespace std;

int main()
{
    long long int i;
    while (cin >> i)
    {
        cout << i << " is a prime: " << (is_prime(i) ? "True" : "False") << endl;
    }
    return 0;
}