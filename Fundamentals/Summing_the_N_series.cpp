#include <bits/stdc++.h>

#define mod 1000000007

int main()
{
  uint16_t N;
  std::cin >> N;

  while ( N-- )
  {
    uint64_t n;
    std::cin >> n;

    n %= mod;

    std::cout << ( n * n ) % mod << std::endl;
  }

  return 0;
}
