#include <bits/stdc++.h>

int main()
{
  uint16_t n;
  uint16_t m;

  std::cin >> n >> m;

  uint32_t supplies;
  supplies = (n + n % 2) * (m + m % 2) / 4;

  std::cout << supplies << std::endl;

  return 0;
}
