#include <bits/stdc++.h>

typedef unsigned long long ull;

int primes[] = {2, 3, 5, 7, 11,
                13, 17, 19, 23,
                29, 31, 37, 41,
                43, 47, 53, 59,
                61, 67, 71, 73,
                79, 83, 89, 97, 101};

int primeCounter(ull n)
{
  if ( n == 1 )
    return 0;

  ull temp = 1;
  int pos = -1;
  int ctr = -1;

  while ( temp <= n )
  {
    ctr++; pos++;

    temp *= primes[pos];
  }

  return ctr;
}

int main()
{
  uint32_t q;
  std::cin >> q;

  ull n;
  while ( q-- )
  {
    std::cin >> n;

    std::cout << primeCounter(n) << std::endl;
  }
}
