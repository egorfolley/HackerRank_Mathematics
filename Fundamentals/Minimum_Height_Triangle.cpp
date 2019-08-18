#include <bits/stdc++.h>

int main()
{
  uint a, b;
  std::cin >> b >> a;

  uint h;
  h = (2 * a + (b - 1)) / b;
  std::cout << h << std::endl;

  return 0;
}
