#include <bits/stdc++.h>
typedef long long int lli;

lli returnSum(lli N, lli m)
{
  return (((( m * (m - 1) ) / 2 ) * (N / m)) + (((N % m) * ((N % m) + 1)) / 2));
}


int main()
{
  uint16_t T;
  std::cin >> T;

  while (T--)
  {
    lli N;
    lli m;
    std::cin >> N >> m;

    std::cout << returnSum(N, m) << std::endl;
  }
}
