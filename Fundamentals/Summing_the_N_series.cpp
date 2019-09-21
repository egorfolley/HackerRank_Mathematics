#include <bits/stdc++.h>

#define mod 1000000007

int main()
{
  int N;
  std::cin >> N;

  int sum = 0;
  while ( N-- )
  {
    unsigned long long n;
    std::cin >> n;

    n %= mod;

    std::cout << (n*n)%mod << std::endl;
  }

  return 0;
}
